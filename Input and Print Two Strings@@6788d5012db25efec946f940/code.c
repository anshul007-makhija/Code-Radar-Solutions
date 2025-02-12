#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x[100];
    char y[100];
    scanf("%s",&x);
    scanf("%s",&y);
    printf("You entered: %s",x);
    printf(" %s",&&y);
    return 0;
}