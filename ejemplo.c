#include "chess.h"
#include "figures.h"

void display(){
  char** whiteKnight = flipH(knight);
  interpreter(whiteKnight);
}
