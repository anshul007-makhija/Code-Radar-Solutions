#include <stdio.h>

int main() {
    int num1, num2;
    num1=5;
    num2=3;
    scanf("%d", &num1);
    scanf("%d", &num2);
    if(num1>num2){
        printf("'True' %d");
    }
    else if(num2>num1){
        printf("'False' %d");
    }
    
    return 0;
}
