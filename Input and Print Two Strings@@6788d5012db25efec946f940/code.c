#include <stdio.h>

int main() {
    char str1[5],str2[5];
    scanf("%5c", &str1);
    scanf("%5c", &str2);
    printf("You entered: %c\n", str1 && str2);
    return 0;
}