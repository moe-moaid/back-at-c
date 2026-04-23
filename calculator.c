#include <stdio.h>
#include <math.h>
#include <regex.h>
#include <ctype.h>

void inter_polator(char *s)
{
  printf("%s", s);

}

int is_operator(char c) {
  return c == '+' || c == '-' || c == '/' || c == '*';
}

char sanitize_input(char* arr, int arr_size) {
  int m = 0, n = 0, sanitized_arr_counter = 0;
  char sanitized_arr[128];
  while (arr[m] != '\0'){
    if(isdigit(arr[m]) || is_operator(arr[m])) {
      sanitized_arr[sanitized_arr_counter] = arr[m];
      arr[n++] = arr[m];
      //printf("%c\n", arr[m]);
      sanitized_arr_counter ++;
    }
    m++;
  }
  int arr_length = sizeof(sanitized_arr)/sizeof(sanitized_arr[0]);
  for(int x = 0; x < arr_length; x++){
    printf("%c index is:: %i && length of the arr is %i\n", sanitized_arr[x], x, arr_length);
  }
  inter_polator(sanitized_arr);
  return *sanitized_arr;
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

