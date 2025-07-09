#include <stdio.h>

int main(void){
  int array_ptr[] = {0, 4, 7, 6, -2};
  for (int i = 0; i < 5; i++)
  {
    printf("%d, ", *(array_ptr + i));
  }
}