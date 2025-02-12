#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y,z;
    if(x==y==z){
        printf("equilateral");
    }
    else if(x!=y!=z){
        printf("scalene");
    }
    else{
        printf("isosceles");
    }
    return 0;
}