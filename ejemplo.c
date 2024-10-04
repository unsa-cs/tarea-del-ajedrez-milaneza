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
void display3(){
  char** blackKnight1 =repeatH(whiteSquare,4);
  interpreter(blackKnight1);
}
