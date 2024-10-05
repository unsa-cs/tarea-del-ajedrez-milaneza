#include "chess.h"
#include "figures.h"

void display(){
  char** square = up(knight, rook);
  interpreter(square);
}
