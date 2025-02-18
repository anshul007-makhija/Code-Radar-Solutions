#include <stdio.h>

int main() {
    int N, sum = 0;

    // Input the number N
    printf("Enter a number N: ");
    scanf("%d", &N);

    // Loop to calculate the sum
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    // Output the sum
    printf("The sum of the first %d natural numbers is: %d\n", N, sum);

    return 0;
}
