#include "chess.h"
#include "figures.h"

void display(){
  char** squareW = whiteSquare;
  char** squareB = reverse(whiteSquare);
  char** pattern = join(squareB, squareW);
  interpreter(pattern);
}
