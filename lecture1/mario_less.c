#include <cs50.h>
#include <stdio.h>

int main(void) {

    // Get height value from user
    int height;
    do {
        height = get_int("Height: ");
    } while (height > 8 || height < 1);

    // Build the pyramid
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - (i + 1); j++) {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++) {
            printf("#");
        }
        printf("\n");
    }

}