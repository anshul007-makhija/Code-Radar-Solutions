#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N;
    scanf("%d",&N);
    for(int i=1;i<N;i++){
        for(int j=0;j<i;j++){
            printf(" ",j);
        }
        
    }
    printf("\n");
    return 0;
}