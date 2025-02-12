#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x=4;
    scanf("%d",&x);
    if(x%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}