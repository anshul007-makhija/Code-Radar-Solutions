#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N;
    scanf("%d",&N);
    for(i=1;i<N;i++){
        for(j=0;j<N-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}