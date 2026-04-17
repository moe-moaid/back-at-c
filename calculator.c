#include <stdio.h>
#include <math.h>
#include <regex.h>
#include <ctype.h>

int is_operator(char c) {
  return c == '+' || c == '-' || c == '/' || c == '*';
}

char sanitize_input(char* arr, int arr_size) {
  int m = 0, n = 0;
  while (arr[m] != "\0"){
    if(isdigit(arr[m]) || is_operator(arr[m])) {
      arr[n++] = arr[m];
      printf("$c\n", arr[m]);
    }
    m++;
  }
  return 0;
}

void calculator() {
  char input[128];
  int arr_size = sizeof(input)/sizeof(input[0]); 
  fgets(input, sizeof(input), stdin);
  sanitize_input(input, arr_size);
}

int main() {
  calculator();
  return 0;
}

