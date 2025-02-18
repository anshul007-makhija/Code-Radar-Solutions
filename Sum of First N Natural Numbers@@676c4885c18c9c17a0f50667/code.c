#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N;
    scanf("%d,&N");
    int sum=0;
    int i;
    for(i=0;i<N;i++){
        printf("%d",sum);
        sum=sum+i;
    }
    return 0;
}