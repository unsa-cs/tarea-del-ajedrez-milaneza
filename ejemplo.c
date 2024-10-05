#include "chess.h"
#include "figures.h"

void display(){
  char** whiteKnight = rotateR(knight);
  interpreter(whiteKnight);
}
