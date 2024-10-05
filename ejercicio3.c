#include "chess.h"
#include "figures.h"

void display(){
  char** square = whiteSquare;
  char** reverse_square = reverse(whiteSquare);
  char** up_square = up(reverse_square,square);
  interpreter(up_square);
}
