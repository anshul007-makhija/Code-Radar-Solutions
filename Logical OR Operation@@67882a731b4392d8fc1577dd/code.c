#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>0 || y>0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}