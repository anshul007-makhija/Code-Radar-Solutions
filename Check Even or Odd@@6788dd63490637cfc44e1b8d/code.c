#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x=4;
    scanf("%d",&x);
    if(x%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}