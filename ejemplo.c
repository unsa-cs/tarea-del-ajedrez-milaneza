#include "chess.h"
#include "figures.h"

void display(){
  char** whiteKnight = flipV(knight);
  interpreter(whiteKnight);
}
