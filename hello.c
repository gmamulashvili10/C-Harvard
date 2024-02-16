// This is program which emulates mario.
#include <stdio.h>
#include <cs50.h>

int print_grid(int n);

  int main(void) {
    // Size of the brick wall.
    int size = 0;
    size = get_int("size: ");
    int result = print_grid(size);
    printf("I have built wall which has size %i\n", result);
}

int print_grid(int n) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
              printf("#");
             }
        printf("\n");
    }

return n*n;
}