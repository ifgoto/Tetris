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

const st_grid tets[7][4] = {
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

const st_crd tetsl[7][4][4] = {
	{ { {1, 2}, {2, 2}, {3, 2}, {4, 2} },
	  { {2, 1}, {2, 2}, {2, 3}, {2, 4} },
	  { {0, 2}, {1, 2}, {2, 2}, {3, 2} },
	  { {2, 0}, {2, 1}, {2, 2}, {2, 3} } },

	{ { {2, 1}, {3, 1}, {2, 2}, {3, 2} },
	  { {2, 2}, {3, 2}, {2, 3}, {3, 3} },
	  { {1, 2}, {2, 2}, {1, 3}, {2, 3} },
	  { {1, 1}, {2, 1}, {1, 2}, {2, 2} } },

	{ { {1, 1}, {1, 2}, {2, 2}, {3, 2} },
	  { {2, 1}, {3, 1}, {2, 2}, {2, 3} },
	  { {1, 2}, {2, 2}, {3, 2}, {3, 3} },
	  { {2, 1}, {2, 2}, {1, 3}, {2, 3} } },

	{ { {3, 1}, {1, 2}, {2, 2}, {3, 2} },
	  { {2, 1}, {2, 2}, {2, 3}, {3, 3} },
	  { {1, 2}, {2, 2}, {3, 2}, {1, 3} },
	  { {1, 1}, {2, 1}, {2, 2}, {2, 3} } },

	{ { {2, 1}, {3, 1}, {1, 2}, {2, 2} },
	  { {2, 1}, {2, 2}, {3, 2}, {3, 3} },
	  { {2, 2}, {3, 2}, {1, 3}, {2, 3} },
	  { {1, 1}, {1, 2}, {2, 2}, {2, 3} } },

	{ { {2, 1}, {1, 2}, {2, 2}, {3, 2} },
	  { {2, 1}, {2, 2}, {3, 2}, {2, 3} },
	  { {1, 2}, {2, 2}, {3, 2}, {2, 3} },
	  { {2, 1}, {1, 2}, {2, 2}, {2, 3} } },

	{ { {1, 1}, {2, 1}, {2, 2}, {3, 2} },
	  { {3, 1}, {2, 2}, {3, 2}, {2, 3} },
	  { {1, 2}, {2, 2}, {2, 3}, {3, 3} },
	  { {2, 1}, {1, 2}, {2, 2}, {1, 3} } }
};

const int points[9] = { 10, 30, 50, 80, 5, /*-500*/-1, 1, 500, -1000000};
