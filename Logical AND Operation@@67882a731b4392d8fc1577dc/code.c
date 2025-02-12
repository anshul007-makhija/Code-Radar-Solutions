#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>0 && y>0){
        print("%d",1);
    }
    else{
        print("%d",0);
    }
    return 0;
}