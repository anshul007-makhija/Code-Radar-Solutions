#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    switch(ch){
    case R:
        printf("Stop");
        break;
    case G:
        printf("Go");
        break;
    Default:
        printf("Invalid input");
    }
    return 0;
}