#include <stdio.h>

int main() {
    char character;

    // Input a character from the user
    printf("Enter a character: ");
    scanf("%c", &character);

    // Check if the character is uppercase or lowercase using ASCII ranges
    if (character >= 'A' && character <= 'Z') {
        printf("The character '%c' is uppercase.\n", character);
    } else if (character >= 'a' && character <= 'z') {
        printf("The character '%c' is lowercase.\n", character);
    } else {
        printf("The character '%c' is neither uppercase nor lowercase.\n", character);
    }

    return 0;
}
