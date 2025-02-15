#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    if("R"){
        printf("Stop");
    }
    else if("G"){
        printf("Go");
    }
    else if("Y"){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    
    return 0;
}