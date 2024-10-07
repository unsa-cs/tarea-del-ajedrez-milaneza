#include "chess.h"
#include "figures.h"

void display(){
  char** squareW = whiteSquare;
  char** squareB = reverse(whiteSquare);
  char** pattern = join(squareB, squareW);
  char** board =repeatH(pattern, 4);
  char** board_reverse = reverse(board);
  char** patron_tablero = up(board,board_reverse);

  //fichas
  char** fichas = join(rook,knight);
  fichas = join(fichas,bishop);
  fichas = join(fichas,queen);
  fichas = join(fichas,king);
  fichas = join(fichas,bishop);
  fichas = join(fichas,knight);
  fichas = join(fichas,rook);
  char** fichas_reverse=reverse(fichas);
  
  //fila peones
  char** peones = repeatH(pawn,8);

  char** up_blanca = up(fichas,peones);
  char** final_board = superImpose(fichas_reverse,board);
  
  interpreter(up_blanca);
}
