#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if(x/1==x  && x%2!=0 && x%3!=0 || x%2!=0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}