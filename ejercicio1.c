#include "chess.h"
#include "figures.h"

void display(){
  char** square1 = whiteSquare;
  char** square2 = reverse(whiteSquare);
  char** square3 = join(square1,square2);
  interpreter(square3);
}
