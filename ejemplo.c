#include "chess.h"
#include "figures.h"

void display(){
  char** square = superImpose(whiteSquare, knight);
  interpreter(square);
}
