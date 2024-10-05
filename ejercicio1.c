#include "chess.h"
#include "figures.h"

void display(){
  char** square1 = whiteSquare;
  char** square2 = reverse(whiteSquare);
  char** square3 = join(square1,square2);
  char** square4 = repeatH(square3,4);
  interpreter(square4);
}
