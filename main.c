#include <stdio.h>
int pyramid() {
  int s = 10;
  for (int x = 0; x <= s; x++){ 
    for (int i = 0; i <= x; i++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

int invertedPyramid() { 
  int s = 10;
  for (int x = s; x >= 0; x--){ 
    for (int i = x; i >= 0; i--) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

int main () {
  pyramid();
  invertedPyramid();
  return 0;
}
