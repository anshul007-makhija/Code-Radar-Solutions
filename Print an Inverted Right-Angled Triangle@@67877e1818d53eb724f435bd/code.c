#include <stdio.h>

int main() {
    int N;

    // Ask user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Outer loop for each row
    for (int i = 0; i < N; i++) {
        // Inner loop for printing stars in each row
        for (int j = 0; j < N - i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
