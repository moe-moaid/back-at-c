#include <stdio.h>
#include <math.h>

int calculator() {
  // char userInput[128];
  //fgets(userInput, sizeof(userInput), stdin);
  char userInput[5];
  fgets(userInput, sizeof(userInput), stdin);
  puts(userInput);
  return 0;
}

int main() {
  calculator();
  return 0;
}

