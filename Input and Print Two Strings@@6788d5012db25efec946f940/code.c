#include <stdio.h>

int main() {
    char str1[1&2&3&4&5&6],str2[1&2&3&4&5&6&7&8&9&10&11];
    scanf("%c", &str1);
    scanf("%c", &str2);
    printf("You entered: %c\n", str1 && str2);
    return 0;
}