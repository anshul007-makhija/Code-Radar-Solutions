#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if("R"){
        printf("Stop");
    }
    else if("G"){
        printf("Go");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}