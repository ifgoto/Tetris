#include "TetrisGlobal.h"

const st_crd offset[3][4][5] = {
	{ { {0, 0}, {-1, 0}, {2, 0}, {-1, 0}, {2, 0} }, 
	  { {-1, 0}, {0, 0}, {0, 0}, {0, 1}, {0, -2} },
	  { {-1, 1}, {1, 1}, {-2, 1}, {1, 0}, {-2, 0} },
	  { {0, 1}, {0, 1}, {0, 1}, {0, -1}, {0, 2} } }, // I
	{ { {0, 0} },
	  { {0, -1} },
	  { {-1, -1} },
	  { {-1, 0} } }, // O
	{ { {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0} },
	  { {0, 0}, {1, 0}, {1, -1}, {0, 2}, {1, 2} },
	  { {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0} },
	  { {0, 0}, {-1, 0}, {-1, -1}, {0, 2}, {-1, 2} } } // J, L, S, T, Z
}; // [tetrotype(I/O/etc)][rot][offset#]

const st_grid tetroshape[7][4] = {
	{ { { {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 1, 1, 1, 1}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {1, 1, 1, 1, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 0} } } }, // I
	
	{ { { {0, 0, 0, 0, 0}, {0, 0, 1, 1, 0}, {0, 0, 1, 1, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 1, 1, 0}, {0, 0, 1, 1, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 1, 1, 0, 0}, {0, 1, 1, 0, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 1, 1, 0, 0}, {0, 1, 1, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0} } } }, // O
	
	{ { { {0, 0, 0, 0, 0}, {0, 1, 0, 0, 0}, {0, 1, 1, 1, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 1, 1, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 1, 1, 1, 0}, {0, 0, 0, 1, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 1, 1, 0, 0}, {0, 0, 0, 0, 0} } } }, // J
	
	{ { { {0, 0, 0, 0, 0}, {0, 0, 0, 1, 0}, {0, 1, 1, 1, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 1, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 1, 1, 1, 0}, {0, 1, 0, 0, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 1, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 0} } } }, // L
	
	{ { { {0, 0, 0, 0, 0}, {0, 0, 1, 1, 0}, {0, 1, 1, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 1, 0}, {0, 0, 0, 1, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 1, 1, 0}, {0, 1, 1, 0, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 1, 0, 0, 0}, {0, 1, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 0} } } }, // S
	
	{ { { {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 1, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 1, 1, 1, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 1, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 0} } } }, // T
	
	{ { { {0, 0, 0, 0, 0}, {0, 1, 1, 0, 0}, {0, 0, 1, 1, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 0, 1, 0}, {0, 0, 1, 1, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 1, 1, 0, 0}, {0, 0, 1, 1, 0}, {0, 0, 0, 0, 0} } },
	  { { {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 1, 1, 0, 0}, {0, 1, 0, 0, 0}, {0, 0, 0, 0, 0} } } }  // Z
}; // [type_tetro][rot]