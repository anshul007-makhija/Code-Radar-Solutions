#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    if(isUpper(ch)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
        }


    return 0;
}