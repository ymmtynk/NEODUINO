#define   _B    0b000        // Black
#define   _R    0b100        // Red
#define   _G    0b010        // Green
#define   _L    0b001        // Blue
#define   _Y    0b110        // Yellow(Red + Green)
#define   _S    0b011        // Sky(Green + Blue)
#define   _P    0b101        // Parple(Blue + Red)
#define   _W    0b111        // White

#define     SWLB(c0, c1, c2, c3, c4)        ((c0<<12)+(c1<<9)+(c2<<6)+(c3<<3)+(c4))

#define     TIME_OF_FRAME   125

const word  IMAGE_DATA[][7] PROGMEM = 
{
  {
    //    0   1   2   3   4     BLACK
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _B, _B, _B),   // 3
    SWLB(_B, _B, _B, _B, _B),   // 4
    SWLB(_B, _B, _B, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B)    // 6
  }, 
  {
    //    0   1   2   3   4     RED
    SWLB(_R, _R, _R, _R, _R),   // 0
    SWLB(_R, _R, _R, _R, _R),   // 1
    SWLB(_R, _R, _R, _R, _R),   // 2
    SWLB(_R, _R, _R, _R, _R),   // 3
    SWLB(_R, _R, _R, _R, _R),   // 4
    SWLB(_R, _R, _R, _R, _R),   // 5
    SWLB(_R, _R, _R, _R, _R)    // 6
  }, 
  {
    //    0   1   2   3   4     GREEN
    SWLB(_G, _G, _G, _G, _G),   // 0
    SWLB(_G, _G, _G, _G, _G),   // 1
    SWLB(_G, _G, _G, _G, _G),   // 2
    SWLB(_G, _G, _G, _G, _G),   // 3
    SWLB(_G, _G, _G, _G, _G),   // 4
    SWLB(_G, _G, _G, _G, _G),   // 5
    SWLB(_G, _G, _G, _G, _G)    // 6
  }, 
  {
    //    0   1   2   3   4     BLUE
    SWLB(_L, _L, _L, _L, _L),   // 0
    SWLB(_L, _L, _L, _L, _L),   // 1
    SWLB(_L, _L, _L, _L, _L),   // 2
    SWLB(_L, _L, _L, _L, _L),   // 3
    SWLB(_L, _L, _L, _L, _L),   // 4
    SWLB(_L, _L, _L, _L, _L),   // 5
    SWLB(_L, _L, _L, _L, _L)    // 6
  }, 
  {
    //    0   1   2   3   4     RED+GREEN
    SWLB(_Y, _Y, _Y, _Y, _Y),   // 0
    SWLB(_Y, _Y, _Y, _Y, _Y),   // 1
    SWLB(_Y, _Y, _Y, _Y, _Y),   // 2
    SWLB(_Y, _Y, _Y, _Y, _Y),   // 3
    SWLB(_Y, _Y, _Y, _Y, _Y),   // 4
    SWLB(_Y, _Y, _Y, _Y, _Y),   // 5
    SWLB(_Y, _Y, _Y, _Y, _Y)    // 6
  }, 
  {
    //    0   1   2   3   4     GREEN+GLUE
    SWLB(_S, _S, _S, _S, _S),   // 0
    SWLB(_S, _S, _S, _S, _S),   // 1
    SWLB(_S, _S, _S, _S, _S),   // 2
    SWLB(_S, _S, _S, _S, _S),   // 3
    SWLB(_S, _S, _S, _S, _S),   // 4
    SWLB(_S, _S, _S, _S, _S),   // 5
    SWLB(_S, _S, _S, _S, _S)    // 6
  }, 
  {
    //    0   1   2   3   4     BLUE+RED
    SWLB(_P, _P, _P, _P, _P),   // 0
    SWLB(_P, _P, _P, _P, _P),   // 1
    SWLB(_P, _P, _P, _P, _P),   // 2
    SWLB(_P, _P, _P, _P, _P),   // 3
    SWLB(_P, _P, _P, _P, _P),   // 4
    SWLB(_P, _P, _P, _P, _P),   // 5
    SWLB(_P, _P, _P, _P, _P)    // 6
  }, 
  {
    //    0   1   2   3   4     RED+GREEN+BLUE
    SWLB(_W, _W, _W, _W, _W),   // 0
    SWLB(_W, _W, _W, _W, _W),   // 1
    SWLB(_W, _W, _W, _W, _W),   // 2
    SWLB(_W, _W, _W, _W, _W),   // 3
    SWLB(_W, _W, _W, _W, _W),   // 4
    SWLB(_W, _W, _W, _W, _W),   // 5
    SWLB(_W, _W, _W, _W, _W)    // 6
  }, 
  {
    //    0   1   2   3   4     BLACK
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _B, _B, _B),   // 3
    SWLB(_B, _B, _B, _B, _B),   // 4
    SWLB(_B, _B, _B, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B)    // 6
  },
/*
  {
    //    0   1   2   3   4        10-6
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _B, _B, _B),   // 3
    SWLB(_B, _B, _B, _B, _B),   // 4
    SWLB(_B, _B, _B, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B),   // 6
    SWLB(_W, _B, _B, _W, _B)    // 0
  },
  {
    //    0   1   2   3   4        10-5
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _B, _B, _B),   // 3
    SWLB(_B, _B, _B, _B, _B),   // 4
    SWLB(_B, _B, _B, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B),   // 6
    SWLB(_W, _B, _B, _W, _B),   // 0
    SWLB(_W, _B, _W, _B, _W)    // 1
  },
  {
    //    0   1   2   3   4        10-4
    SWLB(_B, _B, _B, _B, _B),   // 3
    SWLB(_B, _B, _B, _B, _B),   // 4
    SWLB(_B, _B, _B, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B),   // 6
    SWLB(_W, _B, _B, _W, _B),   // 0
    SWLB(_W, _B, _W, _B, _W),   // 1
    SWLB(_W, _B, _W, _B, _W)    // 2
  },
  {
    //    0   1   2   3   4        10-3
    SWLB(_B, _B, _B, _B, _B),   // 4
    SWLB(_B, _B, _B, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B),   // 6
    SWLB(_W, _B, _B, _W, _B),   // 0
    SWLB(_W, _B, _W, _B, _W),   // 1
    SWLB(_W, _B, _W, _B, _W),   // 2
    SWLB(_W, _B, _W, _B, _W)    // 3
  },
  {
    //    0   1   2   3   4        10-2
    SWLB(_B, _B, _B, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B),   // 6
    SWLB(_W, _B, _B, _W, _B),   // 0
    SWLB(_W, _B, _W, _B, _W),   // 1
    SWLB(_W, _B, _W, _B, _W),   // 2
    SWLB(_W, _B, _W, _B, _W),   // 3
    SWLB(_W, _B, _W, _B, _W)    // 4
  },
  {
    //    0   1   2   3   4        10-1
    SWLB(_B, _B, _B, _B, _B),   // 6
    SWLB(_W, _B, _B, _W, _B),   // 0
    SWLB(_W, _B, _W, _B, _W),   // 1
    SWLB(_W, _B, _W, _B, _W),   // 2
    SWLB(_W, _B, _W, _B, _W),   // 3
    SWLB(_W, _B, _W, _B, _W),   // 4
    SWLB(_W, _B, _W, _B, _W)    // 5
  }, 
  {
    //    0   1   2   3   4        10
    SWLB(_W, _B, _B, _W, _B),   // 0
    SWLB(_W, _B, _W, _B, _W),   // 1
    SWLB(_W, _B, _W, _B, _W),   // 2
    SWLB(_W, _B, _W, _B, _W),   // 3
    SWLB(_W, _B, _W, _B, _W),   // 4
    SWLB(_W, _B, _W, _B, _W),   // 5
    SWLB(_W, _B, _B, _W, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        9-7
    SWLB(_W, _B, _W, _B, _W),   // 1
    SWLB(_W, _B, _W, _B, _W),   // 2
    SWLB(_W, _B, _W, _B, _W),   // 3
    SWLB(_W, _B, _W, _B, _W),   // 4
    SWLB(_W, _B, _W, _B, _W),   // 5
    SWLB(_W, _B, _B, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B)    // -
  },
  {
    //    0   1   2   3   4        9-6
    SWLB(_W, _B, _W, _B, _W),   // 2
    SWLB(_W, _B, _W, _B, _W),   // 3
    SWLB(_W, _B, _W, _B, _W),   // 4
    SWLB(_W, _B, _W, _B, _W),   // 5
    SWLB(_W, _B, _B, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _W, _W, _W, _B)    // 0
  },
  {
    //    0   1   2   3   4        9-5
    SWLB(_W, _B, _W, _B, _W),   // 3
    SWLB(_W, _B, _W, _B, _W),   // 4
    SWLB(_W, _B, _W, _B, _W),   // 5
    SWLB(_W, _B, _B, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _W, _W, _W, _B),   // 0
    SWLB(_W, _B, _B, _B, _W)    // 1
  },
  {
    //    0   1   2   3   4        9-4
    SWLB(_W, _B, _W, _B, _W),   // 4
    SWLB(_W, _B, _W, _B, _W),   // 5
    SWLB(_W, _B, _B, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _W, _W, _W, _B),   // 0
    SWLB(_W, _B, _B, _B, _W),   // 1
    SWLB(_W, _B, _B, _B, _W)    // 2
  },
  {
    //    0   1   2   3   4        9-3
    SWLB(_W, _B, _W, _B, _W),   // 5
    SWLB(_W, _B, _B, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _W, _W, _W, _B),   // 0
    SWLB(_W, _B, _B, _B, _W),   // 1
    SWLB(_W, _B, _B, _B, _W),   // 2
    SWLB(_B, _W, _W, _W, _W)    // 3
  },
  {
    //    0   1   2   3   4        9-2
    SWLB(_W, _B, _B, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _W, _W, _W, _B),   // 0
    SWLB(_W, _B, _B, _B, _W),   // 1
    SWLB(_W, _B, _B, _B, _W),   // 2
    SWLB(_B, _W, _W, _W, _W),   // 3
    SWLB(_B, _B, _B, _B, _W)    // 4
  },
  {
    //    0   1   2   3   4        9-1
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _W, _W, _W, _B),   // 0
    SWLB(_W, _B, _B, _B, _W),   // 1
    SWLB(_W, _B, _B, _B, _W),   // 2
    SWLB(_B, _W, _W, _W, _W),   // 3
    SWLB(_B, _B, _B, _B, _W),   // 4
    SWLB(_B, _B, _B, _B, _W)    // 5
  },
  {
    //    0   1   2   3   4        9
    SWLB(_B, _W, _W, _W, _B),   // 0
    SWLB(_W, _B, _B, _B, _W),   // 1
    SWLB(_W, _B, _B, _B, _W),   // 2
    SWLB(_B, _W, _W, _W, _W),   // 3
    SWLB(_B, _B, _B, _B, _W),   // 4
    SWLB(_B, _B, _B, _B, _W),   // 5
    SWLB(_W, _W, _W, _W, _B)    // 6
  },
  {
    //    0   1   2   3   4        8-7
    SWLB(_W, _B, _B, _B, _W),   // 1
    SWLB(_W, _B, _B, _B, _W),   // 2
    SWLB(_B, _W, _W, _W, _W),   // 3
    SWLB(_B, _B, _B, _B, _W),   // 4
    SWLB(_B, _B, _B, _B, _W),   // 5
    SWLB(_W, _W, _W, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B)    // -
  },
  {
    //    0   1   2   3   4        8-6
    SWLB(_W, _B, _B, _B, _W),   // 2
    SWLB(_B, _W, _W, _W, _W),   // 3
    SWLB(_B, _B, _B, _B, _W),   // 4
    SWLB(_B, _B, _B, _B, _W),   // 5
    SWLB(_W, _W, _W, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _W, _W, _W, _B)    // 0
  },
  {
    //    0   1   2   3   4        8-5
    SWLB(_B, _W, _W, _W, _W),   // 3
    SWLB(_B, _B, _B, _B, _W),   // 4
    SWLB(_B, _B, _B, _B, _W),   // 5
    SWLB(_W, _W, _W, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _W, _W, _W, _B),   // 0
    SWLB(_W, _B, _B, _B, _W)    // 1
  },
  {
    //    0   1   2   3   4        8-4
    SWLB(_B, _B, _B, _B, _W),   // 4
    SWLB(_B, _B, _B, _B, _W),   // 5
    SWLB(_W, _W, _W, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _W, _W, _W, _B),   // 0
    SWLB(_W, _B, _B, _B, _W),   // 1
    SWLB(_W, _B, _B, _B, _W)    // 2
  },
  {
    //    0   1   2   3   4        8-3
    SWLB(_B, _B, _B, _B, _W),   // 5
    SWLB(_W, _W, _W, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _W, _W, _W, _B),   // 0
    SWLB(_W, _B, _B, _B, _W),   // 1
    SWLB(_W, _B, _B, _B, _W),   // 2
    SWLB(_B, _W, _W, _W, _B)    // 3
  },
  {
    //    0   1   2   3   4        8-2
    SWLB(_W, _W, _W, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _W, _W, _W, _B),   // 0
    SWLB(_W, _B, _B, _B, _W),   // 1
    SWLB(_W, _B, _B, _B, _W),   // 2
    SWLB(_B, _W, _W, _W, _B),   // 3
    SWLB(_W, _B, _B, _B, _W)    // 4
  },
  {
    //    0   1   2   3   4        8-1
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _W, _W, _W, _B),   // 0
    SWLB(_W, _B, _B, _B, _W),   // 1
    SWLB(_W, _B, _B, _B, _W),   // 2
    SWLB(_B, _W, _W, _W, _B),   // 3
    SWLB(_W, _B, _B, _B, _W),   // 4
    SWLB(_W, _B, _B, _B, _W)    // 5
  },
  {
    //    0   1   2   3   4        8
    SWLB(_B, _W, _W, _W, _B),   // 0
    SWLB(_W, _B, _B, _B, _W),   // 1
    SWLB(_W, _B, _B, _B, _W),   // 2
    SWLB(_B, _W, _W, _W, _B),   // 3
    SWLB(_W, _B, _B, _B, _W),   // 4
    SWLB(_W, _B, _B, _B, _W),   // 5
    SWLB(_B, _W, _W, _W, _B)    // 6
  },
  {
    //    0   1   2   3   4        7-7
    SWLB(_W, _B, _B, _B, _W),   // 1
    SWLB(_W, _B, _B, _B, _W),   // 2
    SWLB(_B, _W, _W, _W, _B),   // 3
    SWLB(_W, _B, _B, _B, _W),   // 4
    SWLB(_W, _B, _B, _B, _W),   // 5
    SWLB(_B, _W, _W, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B)    // -
  },
  {
    //    0   1   2   3   4        7-6
    SWLB(_W, _B, _B, _B, _W),   // 2
    SWLB(_B, _W, _W, _W, _B),   // 3
    SWLB(_W, _B, _B, _B, _W),   // 4
    SWLB(_W, _B, _B, _B, _W),   // 5
    SWLB(_B, _W, _W, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_W, _W, _W, _W, _W)    // 0
  },
  {
    //    0   1   2   3   4        7-5
    SWLB(_B, _W, _W, _W, _B),   // 3
    SWLB(_W, _B, _B, _B, _W),   // 4
    SWLB(_W, _B, _B, _B, _W),   // 5
    SWLB(_B, _W, _W, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_W, _W, _W, _W, _W),   // 0
    SWLB(_B, _B, _B, _B, _W)    // 1
  },
  {
    //    0   1   2   3   4        7-4
    SWLB(_W, _B, _B, _B, _W),   // 4
    SWLB(_W, _B, _B, _B, _W),   // 5
    SWLB(_B, _W, _W, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_W, _W, _W, _W, _W),   // 0
    SWLB(_B, _B, _B, _B, _W),   // 1
    SWLB(_B, _B, _B, _W, _B)    // 2
  },
  {
    //    0   1   2   3   4        7-3
    SWLB(_W, _B, _B, _B, _W),   // 5
    SWLB(_B, _W, _W, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_W, _W, _W, _W, _W),   // 0
    SWLB(_B, _B, _B, _B, _W),   // 1
    SWLB(_B, _B, _B, _W, _B),   // 2
    SWLB(_B, _B, _W, _B, _B)    // 3
  },
  {
    //    0   1   2   3   4        7-2
    SWLB(_B, _W, _W, _W, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_W, _W, _W, _W, _W),   // 0
    SWLB(_B, _B, _B, _B, _W),   // 1
    SWLB(_B, _B, _B, _W, _B),   // 2
    SWLB(_B, _B, _W, _B, _B),   // 3
    SWLB(_B, _W, _B, _B, _B)    // 4
    },
  {
    //    0   1   2   3   4        7-1
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_W, _W, _W, _W, _W),   // 0
    SWLB(_B, _B, _B, _B, _W),   // 1
    SWLB(_B, _B, _B, _W, _B),   // 2
    SWLB(_B, _B, _W, _B, _B),   // 3
    SWLB(_B, _W, _B, _B, _B),   // 4
    SWLB(_W, _B, _B, _B, _B)    // 5
  },
*/
  {
    //    0   1   2   3   4        7
    SWLB(_W, _W, _W, _W, _W),   // 0
    SWLB(_B, _B, _B, _B, _W),   // 1
    SWLB(_B, _B, _B, _W, _B),   // 2
    SWLB(_B, _B, _W, _B, _B),   // 3
    SWLB(_B, _W, _B, _B, _B),   // 4
    SWLB(_W, _B, _B, _B, _B),   // 5
    SWLB(_W, _B, _B, _B, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        6-7
    SWLB(_B, _B, _B, _B, _W),   // 1
    SWLB(_B, _B, _B, _W, _B),   // 2
    SWLB(_B, _B, _W, _B, _B),   // 3
    SWLB(_B, _W, _B, _B, _B),   // 4
    SWLB(_W, _B, _B, _B, _B),   // 5
    SWLB(_W, _B, _B, _B, _B),   // 6
    SWLB(_B, _B, _B, _B, _B)    // -
  },
  {
    //    0   1   2   3   4        6-6
    SWLB(_B, _B, _B, _W, _B),   // 2
    SWLB(_B, _B, _W, _B, _B),   // 3
    SWLB(_B, _W, _B, _B, _B),   // 4
    SWLB(_W, _B, _B, _B, _B),   // 5
    SWLB(_W, _B, _B, _B, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _P, _P, _P, _P)    // 0
  },
  {
    //    0   1   2   3   4        6-5
    SWLB(_B, _B, _W, _B, _B),   // 3
    SWLB(_B, _W, _B, _B, _B),   // 4
    SWLB(_W, _B, _B, _B, _B),   // 5
    SWLB(_W, _B, _B, _B, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _P, _P, _P, _P),   // 0
    SWLB(_P, _B, _B, _B, _B)    // 1
  },
  {
    //    0   1   2   3   4        6-4
    SWLB(_B, _W, _B, _B, _B),   // 4
    SWLB(_W, _B, _B, _B, _B),   // 5
    SWLB(_W, _B, _B, _B, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _P, _P, _P, _P),   // 0
    SWLB(_P, _B, _B, _B, _B),   // 1
    SWLB(_P, _B, _B, _B, _B)    // 2
  },
  {
    //    0   1   2   3   4        6-3
    SWLB(_W, _B, _B, _B, _B),   // 5
    SWLB(_W, _B, _B, _B, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _P, _P, _P, _P),   // 0
    SWLB(_P, _B, _B, _B, _B),   // 1
    SWLB(_P, _B, _B, _B, _B),   // 2
    SWLB(_P, _P, _P, _P, _B)    // 3
  },
  {
    //    0   1   2   3   4        6-2
    SWLB(_W, _B, _B, _B, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _P, _P, _P, _P),   // 0
    SWLB(_P, _B, _B, _B, _B),   // 1
    SWLB(_P, _B, _B, _B, _B),   // 2
    SWLB(_P, _P, _P, _P, _B),   // 3
    SWLB(_P, _B, _B, _B, _P)    // 4
  },
  {
    //    0   1   2   3   4        6-1
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _P, _P, _P, _P),   // 0
    SWLB(_P, _B, _B, _B, _B),   // 1
    SWLB(_P, _B, _B, _B, _B),   // 2
    SWLB(_P, _P, _P, _P, _B),   // 3
    SWLB(_P, _B, _B, _B, _P),   // 4
    SWLB(_P, _B, _B, _B, _P)    // 5
  },
  {
    //    0   1   2   3   4        6
    SWLB(_B, _P, _P, _P, _P),   // 0
    SWLB(_P, _B, _B, _B, _B),   // 1
    SWLB(_P, _B, _B, _B, _B),   // 2
    SWLB(_P, _P, _P, _P, _B),   // 3
    SWLB(_P, _B, _B, _B, _P),   // 4
    SWLB(_P, _B, _B, _B, _P),   // 5
    SWLB(_B, _P, _P, _P, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        5-7
    SWLB(_P, _B, _B, _B, _B),   // 1
    SWLB(_P, _B, _B, _B, _B),   // 2
    SWLB(_P, _P, _P, _P, _B),   // 3
    SWLB(_P, _B, _B, _B, _P),   // 4
    SWLB(_P, _B, _B, _B, _P),   // 5
    SWLB(_B, _P, _P, _P, _B),   // 6
    SWLB(_B, _B, _B, _B, _B)    // -
  }, 
  {
    //    0   1   2   3   4        5-6
    SWLB(_P, _B, _B, _B, _B),   // 2
    SWLB(_P, _P, _P, _P, _B),   // 3
    SWLB(_P, _B, _B, _B, _P),   // 4
    SWLB(_P, _B, _B, _B, _P),   // 5
    SWLB(_B, _P, _P, _P, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_S, _S, _S, _S, _S)    // 0
  }, 
  {
    //    0   1   2   3   4        5-5
    SWLB(_P, _P, _P, _P, _B),   // 3
    SWLB(_P, _B, _B, _B, _P),   // 4
    SWLB(_P, _B, _B, _B, _P),   // 5
    SWLB(_B, _P, _P, _P, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_S, _S, _S, _S, _S),   // 0
    SWLB(_S, _B, _B, _B, _B)    // 1
  }, 
  {
    //    0   1   2   3   4        5-4
    SWLB(_P, _B, _B, _B, _P),   // 4
    SWLB(_P, _B, _B, _B, _P),   // 5
    SWLB(_B, _P, _P, _P, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_S, _S, _S, _S, _S),   // 0
    SWLB(_S, _B, _B, _B, _B),   // 1
    SWLB(_S, _B, _B, _B, _B)    // 2
  }, 
  {
    //    0   1   2   3   4        5-3
    SWLB(_P, _B, _B, _B, _P),   // 5
    SWLB(_B, _P, _P, _P, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_S, _S, _S, _S, _S),   // 0
    SWLB(_S, _B, _B, _B, _B),   // 1
    SWLB(_S, _B, _B, _B, _B),   // 2
    SWLB(_S, _S, _S, _S, _B)    // 3
  }, 
  {
    //    0   1   2   3   4        5-2
    SWLB(_B, _P, _P, _P, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_S, _S, _S, _S, _S),   // 0
    SWLB(_S, _B, _B, _B, _B),   // 1
    SWLB(_S, _B, _B, _B, _B),   // 2
    SWLB(_S, _S, _S, _S, _B),   // 3
    SWLB(_B, _B, _B, _B, _S)    // 4
  }, 
  {
    //    0   1   2   3   4        5-1
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_S, _S, _S, _S, _S),   // 0
    SWLB(_S, _B, _B, _B, _B),   // 1
    SWLB(_S, _B, _B, _B, _B),   // 2
    SWLB(_S, _S, _S, _S, _B),   // 3
    SWLB(_B, _B, _B, _B, _S),   // 4
    SWLB(_B, _B, _B, _B, _S),   // 5
  }, 
  {
    //    0   1   2   3   4        5
    SWLB(_S, _S, _S, _S, _S),   // 0
    SWLB(_S, _B, _B, _B, _B),   // 1
    SWLB(_S, _B, _B, _B, _B),   // 2
    SWLB(_S, _S, _S, _S, _B),   // 3
    SWLB(_B, _B, _B, _B, _S),   // 4
    SWLB(_B, _B, _B, _B, _S),   // 5
    SWLB(_S, _S, _S, _S, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        4-7
    SWLB(_S, _B, _B, _B, _B),   // 1
    SWLB(_S, _B, _B, _B, _B),   // 2
    SWLB(_S, _S, _S, _S, _B),   // 3
    SWLB(_B, _B, _B, _B, _S),   // 4
    SWLB(_B, _B, _B, _B, _S),   // 5
    SWLB(_S, _S, _S, _S, _B),   // 6
    SWLB(_B, _B, _B, _B, _B)    // -
  }, 
  {
    //    0   1   2   3   4        4-6
    SWLB(_S, _B, _B, _B, _B),   // 2
    SWLB(_S, _S, _S, _S, _B),   // 3
    SWLB(_B, _B, _B, _B, _S),   // 4
    SWLB(_B, _B, _B, _B, _S),   // 5
    SWLB(_S, _S, _S, _S, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _Y, _B)    // 0
  }, 
  {
    //    0   1   2   3   4        4-5
    SWLB(_S, _S, _S, _S, _B),   // 3
    SWLB(_B, _B, _B, _B, _S),   // 4
    SWLB(_B, _B, _B, _B, _S),   // 5
    SWLB(_S, _S, _S, _S, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _Y, _B),   // 0
    SWLB(_B, _B, _Y, _Y, _B)    // 1
  }, 
  {
    //    0   1   2   3   4        4-4
    SWLB(_B, _B, _B, _B, _S),   // 4
    SWLB(_B, _B, _B, _B, _S),   // 5
    SWLB(_S, _S, _S, _S, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _Y, _B),   // 0
    SWLB(_B, _B, _Y, _Y, _B),   // 1
    SWLB(_B, _Y, _B, _Y, _B)    // 2
  }, 
  {
    //    0   1   2   3   4        4-3
    SWLB(_B, _B, _B, _B, _S),   // 5
    SWLB(_S, _S, _S, _S, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _Y, _B),   // 0
    SWLB(_B, _B, _Y, _Y, _B),   // 1
    SWLB(_B, _Y, _B, _Y, _B),   // 2
    SWLB(_Y, _B, _B, _Y, _B)    // 3
  }, 
  {
    //    0   1   2   3   4        4-2
    SWLB(_S, _S, _S, _S, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _Y, _B),   // 0
    SWLB(_B, _B, _Y, _Y, _B),   // 1
    SWLB(_B, _Y, _B, _Y, _B),   // 2
    SWLB(_Y, _B, _B, _Y, _B),   // 3
    SWLB(_Y, _B, _B, _Y, _B)    // 4
  }, 
  {
    //    0   1   2   3   4        4-1
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _Y, _B),   // 0
    SWLB(_B, _B, _Y, _Y, _B),   // 1
    SWLB(_B, _Y, _B, _Y, _B),   // 2
    SWLB(_Y, _B, _B, _Y, _B),   // 3
    SWLB(_Y, _B, _B, _Y, _B),   // 4
    SWLB(_Y, _Y, _Y, _Y, _Y)    // 5
  }, 
  {
    //    0   1   2   3   4        4
    SWLB(_B, _B, _B, _Y, _B),   // 0
    SWLB(_B, _B, _Y, _Y, _B),   // 1
    SWLB(_B, _Y, _B, _Y, _B),   // 2
    SWLB(_Y, _B, _B, _Y, _B),   // 3
    SWLB(_Y, _B, _B, _Y, _B),   // 4
    SWLB(_Y, _Y, _Y, _Y, _Y),   // 5
    SWLB(_B, _B, _B, _Y, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        3-7
    SWLB(_B, _B, _Y, _Y, _B),   // 1
    SWLB(_B, _Y, _B, _Y, _B),   // 2
    SWLB(_Y, _B, _B, _Y, _B),   // 3
    SWLB(_Y, _B, _B, _Y, _B),   // 4
    SWLB(_Y, _Y, _Y, _Y, _Y),   // 5
    SWLB(_B, _B, _B, _Y, _B),   // 6
    SWLB(_B, _B, _B, _B, _B)    // -
  }, 
  {
    //    0   1   2   3   4        3-6
    SWLB(_B, _Y, _B, _Y, _B),   // 2
    SWLB(_Y, _B, _B, _Y, _B),   // 3
    SWLB(_Y, _B, _B, _Y, _B),   // 4
    SWLB(_Y, _Y, _Y, _Y, _Y),   // 5
    SWLB(_B, _B, _B, _Y, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _L, _L, _L, _B)    // 0
  }, 
  {
    //    0   1   2   3   4        3-5
    SWLB(_Y, _B, _B, _Y, _B),   // 3
    SWLB(_Y, _B, _B, _Y, _B),   // 4
    SWLB(_Y, _Y, _Y, _Y, _Y),   // 5
    SWLB(_B, _B, _B, _Y, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _L, _L, _L, _B),   // 0
    SWLB(_L, _B, _B, _B, _L)    // 1
  }, 
  {
    //    0   1   2   3   4        3-4
    SWLB(_Y, _B, _B, _Y, _B),   // 4
    SWLB(_Y, _Y, _Y, _Y, _Y),   // 5
    SWLB(_B, _B, _B, _Y, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _L, _L, _L, _B),   // 0
    SWLB(_L, _B, _B, _B, _L),   // 1
    SWLB(_B, _B, _B, _B, _L)    // 2
  }, 
  {
    //    0   1   2   3   4        3-3
    SWLB(_Y, _Y, _Y, _Y, _Y),   // 5
    SWLB(_B, _B, _B, _Y, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _L, _L, _L, _B),   // 0
    SWLB(_L, _B, _B, _B, _L),   // 1
    SWLB(_B, _B, _B, _B, _L),   // 2
    SWLB(_B, _B, _L, _L, _B)    // 3
  }, 
  {
    //    0   1   2   3   4        3-2
    SWLB(_B, _B, _B, _Y, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _L, _L, _L, _B),   // 0
    SWLB(_L, _B, _B, _B, _L),   // 1
    SWLB(_B, _B, _B, _B, _L),   // 2
    SWLB(_B, _B, _L, _L, _B),   // 3
    SWLB(_B, _B, _B, _B, _L)    // 4
  }, 
  {
    //    0   1   2   3   4        3-1
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _L, _L, _L, _B),   // 0
    SWLB(_L, _B, _B, _B, _L),   // 1
    SWLB(_B, _B, _B, _B, _L),   // 2
    SWLB(_B, _B, _L, _L, _B),   // 3
    SWLB(_B, _B, _B, _B, _L),   // 4
    SWLB(_L, _B, _B, _B, _L)    // 5
  }, 
  {
    //    0   1   2   3   4        3
    SWLB(_B, _L, _L, _L, _B),   // 0
    SWLB(_L, _B, _B, _B, _L),   // 1
    SWLB(_B, _B, _B, _B, _L),   // 2
    SWLB(_B, _B, _L, _L, _B),   // 3
    SWLB(_B, _B, _B, _B, _L),   // 4
    SWLB(_L, _B, _B, _B, _L),   // 5
    SWLB(_B, _L, _L, _L, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        2-7
    SWLB(_L, _B, _B, _B, _L),   // 1
    SWLB(_B, _B, _B, _B, _L),   // 2
    SWLB(_B, _B, _L, _L, _B),   // 3
    SWLB(_B, _B, _B, _B, _L),   // 4
    SWLB(_L, _B, _B, _B, _L),   // 5
    SWLB(_B, _L, _L, _L, _B),   // 6
    SWLB(_B, _B, _B, _B, _B)    // -
  },
  {
    //    0   1   2   3   4        2-6
    SWLB(_B, _B, _B, _B, _L),   // 2
    SWLB(_B, _B, _L, _L, _B),   // 3
    SWLB(_B, _B, _B, _B, _L),   // 4
    SWLB(_L, _B, _B, _B, _L),   // 5
    SWLB(_B, _L, _L, _L, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _G, _G, _G, _B)    // 0
  },
  {
    //    0   1   2   3   4        2-5
    SWLB(_B, _B, _L, _L, _B),   // 3
    SWLB(_B, _B, _B, _B, _L),   // 4
    SWLB(_L, _B, _B, _B, _L),   // 5
    SWLB(_B, _L, _L, _L, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _G, _G, _G, _B),   // 0
    SWLB(_G, _B, _B, _B, _G)    // 1
  },
  {
    //    0   1   2   3   4        2-4
    SWLB(_B, _B, _B, _B, _L),   // 4
    SWLB(_L, _B, _B, _B, _L),   // 5
    SWLB(_B, _L, _L, _L, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _G, _G, _G, _B),   // 0
    SWLB(_G, _B, _B, _B, _G),   // 1
    SWLB(_G, _B, _B, _B, _G)    // 2
  },
  {
    //    0   1   2   3   4        2-3
    SWLB(_L, _B, _B, _B, _L),   // 5
    SWLB(_B, _L, _L, _L, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _G, _G, _G, _B),   // 0
    SWLB(_G, _B, _B, _B, _G),   // 1
    SWLB(_G, _B, _B, _B, _G),   // 2
    SWLB(_B, _B, _B, _G, _B)    // 3
  },
  {
    //    0   1   2   3   4        2-2
    SWLB(_B, _L, _L, _L, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _G, _G, _G, _B),   // 0
    SWLB(_G, _B, _B, _B, _G),   // 1
    SWLB(_G, _B, _B, _B, _G),   // 2
    SWLB(_B, _B, _B, _G, _B),   // 3
    SWLB(_B, _G, _G, _B, _B)    // 4
  },
  {
    //    0   1   2   3   4        2-1
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _G, _G, _G, _B),   // 0
    SWLB(_G, _B, _B, _B, _G),   // 1
    SWLB(_G, _B, _B, _B, _G),   // 2
    SWLB(_B, _B, _B, _G, _B),   // 3
    SWLB(_B, _G, _G, _B, _B),   // 4
    SWLB(_G, _B, _B, _B, _B)    // 5
  },
  {
    //    0   1   2   3   4        2
    SWLB(_B, _G, _G, _G, _B),   // 0
    SWLB(_G, _B, _B, _B, _G),   // 1
    SWLB(_G, _B, _B, _B, _G),   // 2
    SWLB(_B, _B, _B, _G, _B),   // 3
    SWLB(_B, _G, _G, _B, _B),   // 4
    SWLB(_G, _B, _B, _B, _B),   // 5
    SWLB(_G, _G, _G, _G, _G)    // 6
  }, 
  {
    //    0   1   2   3   4        1-7
    SWLB(_G, _B, _B, _B, _G),   // 1
    SWLB(_G, _B, _B, _B, _G),   // 2
    SWLB(_B, _B, _B, _G, _B),   // 3
    SWLB(_B, _G, _G, _B, _B),   // 4
    SWLB(_G, _B, _B, _B, _B),   // 5
    SWLB(_G, _G, _G, _G, _G),   // 6
    SWLB(_B, _B, _B, _B, _B)    // -
  }, 
  {
    //    0   1   2   3   4        1-6
    SWLB(_G, _B, _B, _B, _G),   // 2
    SWLB(_B, _B, _B, _G, _B),   // 3
    SWLB(_B, _G, _G, _B, _B),   // 4
    SWLB(_G, _B, _B, _B, _B),   // 5
    SWLB(_G, _G, _G, _G, _G),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _R, _B, _B)    // 0
  },
  {
    //    0   1   2   3   4        1-5
    SWLB(_B, _B, _B, _G, _B),   // 3
    SWLB(_B, _G, _G, _B, _B),   // 4
    SWLB(_G, _B, _B, _B, _B),   // 5
    SWLB(_G, _G, _G, _G, _G),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _R, _B, _B),   // 0
    SWLB(_B, _R, _R, _B, _B)    // 1
  },
  {
    //    0   1   2   3   4        1-4
    SWLB(_B, _G, _G, _B, _B),   // 4
    SWLB(_G, _B, _B, _B, _B),   // 5
    SWLB(_G, _G, _G, _G, _G),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _R, _B, _B),   // 0
    SWLB(_B, _R, _R, _B, _B),   // 1
    SWLB(_B, _B, _R, _B, _B)    // 2
  },
  {
    //    0   1   2   3   4        1-3
    SWLB(_G, _B, _B, _B, _B),   // 5
    SWLB(_G, _G, _G, _G, _G),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _R, _B, _B),   // 0
    SWLB(_B, _R, _R, _B, _B),   // 1
    SWLB(_B, _B, _R, _B, _B),   // 2
    SWLB(_B, _B, _R, _B, _B)    // 3
  },
  {
    //    0   1   2   3   4        1-2
    SWLB(_G, _G, _G, _G, _G),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _R, _B, _B),   // 0
    SWLB(_B, _R, _R, _B, _B),   // 1
    SWLB(_B, _B, _R, _B, _B),   // 2
    SWLB(_B, _B, _R, _B, _B),   // 3
    SWLB(_B, _B, _R, _B, _B)    // 4
  },
  {
    //    0   1   2   3   4        1-1
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _R, _B, _B),   // 0
    SWLB(_B, _R, _R, _B, _B),   // 1
    SWLB(_B, _B, _R, _B, _B),   // 2
    SWLB(_B, _B, _R, _B, _B),   // 3
    SWLB(_B, _B, _R, _B, _B),   // 4
    SWLB(_B, _B, _R, _B, _B)    // 5  
  },
  {
    //    0   1   2   3   4        1
    SWLB(_B, _B, _R, _B, _B),   // 0
    SWLB(_B, _R, _R, _B, _B),   // 1
    SWLB(_B, _B, _R, _B, _B),   // 2
    SWLB(_B, _B, _R, _B, _B),   // 3
    SWLB(_B, _B, _R, _B, _B),   // 4
    SWLB(_B, _B, _R, _B, _B),   // 5
    SWLB(_B, _R, _R, _R, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        0-7
    SWLB(_B, _R, _R, _B, _B),   // 1
    SWLB(_B, _B, _R, _B, _B),   // 2
    SWLB(_B, _B, _R, _B, _B),   // 3
    SWLB(_B, _B, _R, _B, _B),   // 4
    SWLB(_B, _B, _R, _B, _B),   // 5
    SWLB(_B, _R, _R, _R, _B),   // 6
    SWLB(_B, _B, _B, _B, _B)    // -
  }, 
  {
    //    0   1   2   3   4        0-6
    SWLB(_B, _B, _R, _B, _B),   // 2
    SWLB(_B, _B, _R, _B, _B),   // 3
    SWLB(_B, _B, _R, _B, _B),   // 4
    SWLB(_B, _B, _R, _B, _B),   // 5
    SWLB(_B, _R, _R, _R, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B)    // -
  }, 
  {
    //    0   1   2   3   4        0-5
    SWLB(_B, _B, _R, _B, _B),   // 3
    SWLB(_B, _B, _R, _B, _B),   // 4
    SWLB(_B, _B, _R, _B, _B),   // 5
    SWLB(_B, _R, _R, _R, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B)    // -
  }, 
  {
    //    0   1   2   3   4        0-4
    SWLB(_B, _B, _R, _B, _B),   // 4
    SWLB(_B, _B, _R, _B, _B),   // 5
    SWLB(_B, _R, _R, _R, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B)    // -
  }, 
  {
    //    0   1   2   3   4        0-3
    SWLB(_B, _B, _R, _B, _B),   // 5
    SWLB(_B, _R, _R, _R, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B)    // -    
  }, 
  {
    //    0   1   2   3   4        0-2
    SWLB(_B, _R, _R, _R, _B),   // 6
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B)    // -    
  }, 
  {
    //    0   1   2   3   4        0-1
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B),   // -
    SWLB(_B, _B, _B, _B, _B)    // - 
  }, 
  {
    //    0   1   2   3   4        BLACK
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _B, _B, _B),   // 3
    SWLB(_B, _B, _B, _B, _B),   // 4
    SWLB(_B, _B, _B, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _B, _B, _B),   // 3
    SWLB(_B, _B, _B, _B, _B),   // 4
    SWLB(_B, _B, _B, _B, _B),   // 5
    SWLB(_B, _B, _W, _B, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _B, _B, _B),   // 3
    SWLB(_B, _B, _B, _B, _B),   // 4
    SWLB(_B, _B, _W, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _B, _B, _B),   // 3
    SWLB(_B, _B, _W, _B, _B),   // 4
    SWLB(_B, _B, _W, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _W, _B, _B),   // 3
    SWLB(_B, _B, _W, _B, _B),   // 4
    SWLB(_B, _B, _B, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _W, _B, _B),   // 3
    SWLB(_B, _B, _B, _B, _B),   // 4
    SWLB(_B, _B, _B, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _B, _B, _B),   // 3
    SWLB(_B, _B, _B, _B, _B),   // 4
    SWLB(_B, _B, _B, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _W, _B, _B),   // 2
    SWLB(_B, _W, _B, _W, _B),   // 3
    SWLB(_B, _B, _W, _B, _B),   // 4
    SWLB(_B, _B, _B, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _W, _B, _B),   // 1
    SWLB(_B, _W, _B, _W, _B),   // 2
    SWLB(_W, _B, _W, _B, _W),   // 3
    SWLB(_B, _W, _B, _W, _B),   // 4
    SWLB(_B, _B, _W, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _W, _B, _B),   // 0
    SWLB(_W, _B, _B, _B, _W),   // 1
    SWLB(_B, _B, _W, _B, _B),   // 2
    SWLB(_B, _W, _B, _W, _B),   // 3
    SWLB(_B, _B, _W, _B, _B),   // 4
    SWLB(_W, _B, _B, _B, _W),   // 5
    SWLB(_B, _B, _W, _B, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _L, _B, _B),   // 0
    SWLB(_L, _B, _B, _B, _L),   // 1
    SWLB(_B, _B, _L, _B, _B),   // 2
    SWLB(_B, _L, _B, _L, _B),   // 3
    SWLB(_B, _B, _L, _B, _B),   // 4
    SWLB(_L, _B, _B, _B, _L),   // 5
    SWLB(_B, _B, _L, _B, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _S, _B, _B),   // 1
    SWLB(_S, _B, _B, _B, _S),   // 2
    SWLB(_B, _B, _S, _B, _B),   // 3
    SWLB(_B, _S, _B, _S, _B),   // 4
    SWLB(_B, _B, _S, _B, _B),   // 5
    SWLB(_S, _B, _B, _B, _S)    // 6
  }, 
  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _G, _B, _B),   // 2
    SWLB(_G, _B, _B, _B, _G),   // 3
    SWLB(_B, _B, _G, _B, _B),   // 4
    SWLB(_B, _G, _B, _G, _B),   // 5
    SWLB(_B, _B, _G, _B, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _Y, _B, _B),   // 3
    SWLB(_Y, _B, _B, _B, _Y),   // 4
    SWLB(_B, _B, _Y, _B, _B),   // 5
    SWLB(_B, _Y, _B, _Y, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _B, _B, _B),   // 3
    SWLB(_B, _B, _R, _B, _B),   // 4
    SWLB(_R, _B, _B, _B, _R),   // 5
    SWLB(_B, _B, _R, _B, _B)    // 6
  }, 
  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _B, _B, _B),   // 3
    SWLB(_B, _B, _B, _B, _B),   // 4
    SWLB(_B, _B, _R, _B, _B),   // 5
    SWLB(_R, _B, _B, _B, _R)    // 6
  }, 

  {
    //    0   1   2   3   4        
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _B, _B, _B),   // 3
    SWLB(_B, _B, _B, _B, _B),   // 4
    SWLB(_B, _B, _B, _B, _B),   // 5
    SWLB(_B, _B, _R, _B, _B)    // 6
  }, 




  
  {
    //    0   1   2   3   4     BLACK
    SWLB(_B, _B, _B, _B, _B),   // 0
    SWLB(_B, _B, _B, _B, _B),   // 1
    SWLB(_B, _B, _B, _B, _B),   // 2
    SWLB(_B, _B, _B, _B, _B),   // 3
    SWLB(_B, _B, _B, _B, _B),   // 4
    SWLB(_B, _B, _B, _B, _B),   // 5
    SWLB(_B, _B, _B, _B, _B)    // 6
  }
};

