#include <stdio.h>

int main() {
    int N, sum = 0;

    // Input the number N
    scanf("%d", &N);

    // Loop to calculate the sum
    for (int i = 0; i <= N; i++) {
        sum =sum+i;
    }

    // Output the sum
    printf("%d\n",sum);

    return 0;
}
