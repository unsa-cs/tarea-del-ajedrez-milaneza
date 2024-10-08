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
  
  //fila peones
  char** peones = repeatH(pawn,8);

  char** up_blanca = up(fichas,peones);
  char** fichas_negras = up(peones, fichas);
  fichas_negras = reverse(fichas_negras);
  char** blancas_board = superImpose(up_blanca,patron_tablero);
  char** negras_board = superImpose(fichas_negras,patron_tablero); 
  char** final_board = up(blancas_board,patron_tablero);
  final_board = up(final_board,patron_tablero);
  final_board = up(final_board,negras_board);
  interpreter(final_board);
}
