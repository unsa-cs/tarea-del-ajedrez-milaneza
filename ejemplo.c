#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = reverse(reverse(knight));
  interpreter(blackKnight);
}
