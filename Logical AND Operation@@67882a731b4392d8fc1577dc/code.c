#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double x,y;
    scanf("%lf",&x);
    scanf("%lf",&y);
    if(x>0 && y>0){
        print("True\n");
    }
    else{
        print("False");
    }
    return 0;
}