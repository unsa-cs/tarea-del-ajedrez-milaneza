#include "chess.h"
#include "figures.h"

void display(){
  char** square = whiteSquare;
  char** reverse_square = reverse(whiteSquare);
  char** up_square = up(reverse_square,square);
  char** columna_square = repeatV(up_square,2);
  interpreter(columna_square);

}
