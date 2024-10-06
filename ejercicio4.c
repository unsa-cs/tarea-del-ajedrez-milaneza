#include "chess.h"
#include "figures.h"

void display(){
  char** squareW = whiteSquare;
  char** squareB = reverse(whiteSquare);
  char** rookW = superImpose(rook, squareW);
  interpreter(rookW);
}
