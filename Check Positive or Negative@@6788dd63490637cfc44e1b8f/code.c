#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if(x<0){
        printf("Negative");
    }
    else if(x>0){
        printf("Positive");
    }
    else{
        printf("Zero");
    }
    return 0;
}