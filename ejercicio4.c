#include "chess.h"
#include "figures.h"

void display(){
  char** squareW = whiteSquare;
  char** squareB = reverse(whiteSquare);
  char** pattern = join(squareB, squareW);
  char** board =repeatH(pattern, 4);

  //fichas
  char** prueba = join(rook,knight);
  prueba = join(prueba,bishop);
  char** final_board = superImpose(prueba,board);
  
  interpreter(final_board);
}
