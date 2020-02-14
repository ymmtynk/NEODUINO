#include <MsTimer2.h>

#include "imagedata.h"


#define     NUM_OF_LEDS     15

const word  LED_BITMASK[NUM_OF_LEDS] = 
{
  0b0100000000000000,   // 0 R0
  0b0010000000000000,   // 1 G0
  0b0001000000000000,   // 2 B0
  0b0000100000000000,   // 3 R1
  0b0000010000000000,   // 4 G1
  0b0000001000000000,   // 5 B1
  0b0000000100000000,   // 6 R2
  0b0000000010000000,   // 7 G2
  0b0000000001000000,   // 8 B2
  0b0000000000100000,   // 9 R3
  0b0000000000010000,   // A G3
  0b0000000000001000,   // B B3
  0b0000000000000100,   // C R4
  0b0000000000000010,   // D G4
  0b0000000000000001    // E B4
};

const char  LED_RGB[NUM_OF_LEDS] = 
{
  A5, A4, A3,     // R0, G0, B0
  11, A0, 13,     // R1, G1, B1
  10,  8,  7,     // R2, G2, B2
   9,  6,  5,     // R3, G3, B3
  12, A2, A1,     // R4, G4, B4
};

const char  LED_row[3] = { 4, 3, 2};

static int  num_of_data;
static int  crt_data;
static int  crt_row;

void    set_row(bool  rowA, bool  rowB, bool  rowC)
{
  digitalWrite(LED_row[0], rowA);
  digitalWrite(LED_row[1], rowB);
  digitalWrite(LED_row[2], rowC);
  
  return;
}

void    switch_row(byte num)
{
  switch(num) {
    case 4: // Y0
      set_row(false, false, false);
      break;
    case 6: // Y1
      set_row(true, false, false);
      break;
    case 5: // Y2
      set_row(false, true, false);
      break;
    case 3: // Y3
      set_row(true, true, false);
      break;
    case 2: // Y4
      set_row(false, false, true);
      break;
    case 1: // Y5
      set_row(true, false, true);
      break;
    case 0: // Y6
      set_row(false, true, true);
      break;
    default: // Y7
      set_row(true, true, true);
      break;
  }
  
  return;
}

void  set_color(word  color)
{
  int i;
  
//  Serial.print(crt_data, DEC);   
//  Serial.print("/");
//  Serial.print(crt_row, DEC);   
//  Serial.print("/");
//  Serial.print(color, BIN);   
//  Serial.print(":");
    
  for (i=0; i<NUM_OF_LEDS; i++) {
    if ((color & LED_BITMASK[i]) != 0x0000) {
      digitalWrite(LED_RGB[i], LOW);
//      Serial.print("0");  
    } else {
      digitalWrite(LED_RGB[i], HIGH);
//      Serial.print("1");  
    }
  }
//  Serial.println();  
  
  return;
}

void  updateMatrix()
{
  //set_color(0x0000);  
  switch_row(-1);   // all off
  delayMicroseconds(500);

  
  set_color(pgm_read_word(&(IMAGE_DATA[crt_data][crt_row])));
  switch_row(crt_row); // on
  //delay(1);
  delayMicroseconds(500);
  
  crt_row++;
  if (crt_row >= 7) {
    crt_row = 0;
  }
  
  return;
}

void  updateData()
{
  crt_data++;
  if (crt_data >= num_of_data) {
    crt_data = 0;
  }
  //Serial.println(crt_data, DEC);
    
  return;
}

void setup() {

  num_of_data = sizeof(IMAGE_DATA)/14;
  crt_data = 0;
  crt_row  = 0;

  int i;

  for (i=0; i<NUM_OF_LEDS; i++) {
    digitalWrite(LED_RGB[i], HIGH);
    pinMode(LED_RGB[i], OUTPUT);
  }
  for (i=0; i<3; i++) {
    digitalWrite(LED_row[i], HIGH);
    pinMode(LED_row[i], OUTPUT);
  }
  
  Serial.begin(115200);
  
  Serial.println(" NEODUINO TEST");
  Serial.print(" data size = ");
  Serial.println(num_of_data, DEC);

  MsTimer2::set(TIME_OF_FRAME, updateData); // timer
  MsTimer2::start();
  
  return;
}

void loop() {
  updateMatrix();
  
  return;
}



