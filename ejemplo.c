#include "chess.h"
#include "figures.h"

void display(){
  char** whiteKnight = rotateL((knight));
  interpreter(whiteKnight);
}
