#include "chess.h"
#include "figures.h"

void display(){
  char** square = whiteSquare;
  char** reverse_square = reverse(whiteSquare);
  interpreter(reverse_square);
}
