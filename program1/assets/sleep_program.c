#include<stdio.h>
#include<unistd.h>

int main(void){
  int input;
  printf("Enter 0 to exit OR 1 to sleep: ");
  scanf("%d", &input);

  if (input==0){
    printf("Exiting.....\n");
  }
  else{
    sleep(10);
    printf("Sleeping for 10 seconds.....\n");
    printf("Exiting.....\n");
  }
}