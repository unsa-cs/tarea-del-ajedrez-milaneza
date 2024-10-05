#include "chess.h"
#include "figures.h"

void display(){
  char** square = whiteSquare;
  char** reverse_square = reverse(whiteSquare);
  char** up_square = up(reverse_square,square);
  char** columna_square = repeatV(up_square,2);
  char** reverse_columna = reverse(columna_square);
  char** patron_square = join(columna_square,reverse_columna);
  interpreter(patron_square);

}
