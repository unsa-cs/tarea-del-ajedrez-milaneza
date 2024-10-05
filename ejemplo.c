#include "chess.h"
#include "figures.h"

void display(){
  char** square = repeatH(knight, 5);
  interpreter(square);
}
