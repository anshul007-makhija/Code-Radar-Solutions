#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y,z;
    if(x==y ||x==z ||y==z){
        printf("Equilateral");
    }
    else if(x==y!=z){
        printf("Isosceles");
    }
    else{
        printf("scalene");
    }
    return 0;
}