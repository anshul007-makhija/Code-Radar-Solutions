#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("True %d\n", num1, num2);
    } else if (num1 < num2) {
        printf("False %d\n", num1, num2);
    } 
    
    return 0;
}
