#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if(x%4==0){
        printf("Leap year");
    }
    return 0;
}