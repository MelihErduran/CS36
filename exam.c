#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern

    // Outer loop controls the number of rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop controls the number of stars in each row
        for (int j = rows; j >= i; j--) {
            printf("* ");
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}

