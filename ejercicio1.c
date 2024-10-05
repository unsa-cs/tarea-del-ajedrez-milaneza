#include "chess.h"
#include "figures.h"

void display(){
  char** square1 = whiteSquare;
  char** square2 = reverse(whiteSquare);

  interpreter(square1);
  interpreter(square2);
}
