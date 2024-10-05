#include "chess.h"
#include "figures.h"

void display(){
  char** whiteKnight = rotateL(rotateL(knight));
  interpreter(whiteKnight);
}
