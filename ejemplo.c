#include "chess.h"
#include "figures.h"

void display(){
  char** square = superImpose(knight, whiteSquare);
  interpreter(square);
}
