#include <stdio.h>
int main(){
    int N,x;
    x=(0,N);
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=2; j<=i;j++){
            printf("%d");
        }
        printf("\n");
    }
}