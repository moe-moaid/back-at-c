#include <stdio.h>

  /*
   * Pointers are basically addresses that point to the location in memory
   * that stores the specific variable value that we are pointing to
   *
   * EASY SHITZE!!!!
   **/

int main() {
  // getting the pointer value
  int someShit = 10;
  printf("var value:: %d \n", someShit);
  printf("var pointer:: %p \n", &someShit);

  // declaring a pointer
  int *py, y;
  y = 12;
  py = &y; // it contains the address value that contains y
  printf("y normal value:: %d \n", y);
  printf("pointer value using &y:: %p \npointer value using py:: %p \n", &y, py);
  printf("getting value pointed at:: %d \n", *py);
  y = 5;
  printf("changed y value:: %d \n", y);
  printf("getting value pointed at:: %d \n", *py);
  printf("changing the value using *py\n");
  *py = 88;
  printf("y normal value:: %d \n", y);
  printf("getting value pointed at:: %d \n", *py);
  printf("y pointer value:: %p \n", py);

  // pointers for array elements
  int arr[4] = {2, 4, 6};
  for (int i = 0; i < 4; i++){
    printf("&x[%d] = %p \n", i, &arr[i]);
  }
  printf("array address %p \n", &arr);
  printf("%d , %d \n", arr[0], *arr);
  printf("%p , %p \n", &arr[0], &arr);
  //to de reference a value outsid printf statement we do:
  //*(value) or if it was an array *(value[index_number]);

  /*
   * the address of both first element in the arra and the array is same
   * because the name of the array point at the first element of the array
   * hence the value of first element of the array == the value of the array pointer (*arr)
   **/
}
