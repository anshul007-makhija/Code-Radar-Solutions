#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x[100];
    int y;
    char z[100];
    scanf("%s",&x);
    scanf("%d",&y);
    scanf("%s",&z);

    printf("Name: %s\n",x);
    printf("Age: %d\n", y);
    printf("Hobby: %s",z);
    return 0;
}