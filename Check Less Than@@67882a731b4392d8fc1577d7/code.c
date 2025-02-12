#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x<y){
        printf("True");
    }
    else{
        printf("False")
    }
    printf("%s", welcome());
    return 0;
}