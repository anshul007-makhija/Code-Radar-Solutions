#include <stdio.h>

int main() {
    char character;

    // Input a single character
    printf("Enter a character: ");
    scanf("%c", &character);

    // Output the ASCII value of the character
    printf("The ASCII value of '%c' is: %d\n", character, character);

    return 0;
}
