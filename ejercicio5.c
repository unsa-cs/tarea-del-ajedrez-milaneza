#include "chess.h"
#include "figures.h"

void display(){
  char** squareW = whiteSquare;
  char** squareB = reverse(whiteSquare);
  char** pattern = join(squareB, squareW);
  char** board =repeatH(pattern, 4);

  //fichas
  char** fichas = join(rook,knight);
  fichas = join(fichas,bishop);
  fichas = join(fichas,queen);
  fichas = join(fichas,king);
  fichas = join(fichas,bishop);
  fichas = join(fichas,knight);
  fichas = join(fichas,rook);
  char** fichas_reverse=reverse(fichas);
  char** final_board = superImpose(fichas_reverse,board);
  
  interpreter(final_board);
}
