#include "chess.h"
#include "figures.h"

void display(){
  char** square1 = repeatH(whiteSquare, 8);
  char** square2 = reverse(knight);

  interpreter(square1);
  interpreter(square2);
}
