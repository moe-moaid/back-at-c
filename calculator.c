#include <stdio.h>
#include <math.h>

int sanitize_input(int* arr, int arr_size) {
  int sum = 0;
  for(int x = 0; x < arr_size; x++) {
    sum += *(arr + x); // finally found it, this is how to dereference pointers outside printf statement
  }
  return sum;
}

void calculator() {
  int some_arr[] = {1, 2, 3, 4, 5};
  int arr_size = sizeof(some_arr)/sizeof(some_arr[0]); 
  printf("%d", sanitize_input(some_arr, arr_size));
}

int main() {
  calculator();
  return 0;
}

