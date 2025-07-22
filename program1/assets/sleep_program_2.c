#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  int input = atoi(argv[1]);

  if (input == 0) {
    printf("Exiting.....\n");
  }
  else {
    sleep(10);
    printf("Sleeping for 10 seconds.....\n");
    printf("Exiting.....\n");
  }

  return 0;
}
