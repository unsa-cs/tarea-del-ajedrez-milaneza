#include "chess.h"
#include "figures.h"

void display(){
  char** square = repeatV(knight, 6);
  interpreter(square);
}
