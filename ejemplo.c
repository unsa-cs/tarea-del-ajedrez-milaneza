#include "chess.h"
#include "figures.h"

void display(){
  char** square = join(knight, rook);
  interpreter(square);
}
