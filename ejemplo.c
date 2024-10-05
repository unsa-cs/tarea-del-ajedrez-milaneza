include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = repeatV(whiteSquare,8);
  interpreter(blackKnight);
}
