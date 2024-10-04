#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = reverse(whiteSquare);
  interpreter(blackKnight);
}


void display2(){
  char** blackKnight1 = whiteSquare;
  interpreter(blackKnight1);
}
