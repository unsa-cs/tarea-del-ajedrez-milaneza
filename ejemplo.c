#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = repeatH(whiteSquare,4);
  interpreter(blackKnight);
}
