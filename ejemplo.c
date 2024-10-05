#include "chess.h"
#include "figures.h"

void display(){
  char** whiteKnight = flipV(flipH(knight));
  interpreter(whiteKnight);
}
