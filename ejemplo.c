#include "chess.h"
#include "figures.h"

void display(){
  char** whiteKnight = rotateL(rotateR(knight));
  interpreter(whiteKnight);
}
