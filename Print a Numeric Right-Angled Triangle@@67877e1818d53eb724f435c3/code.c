#include <stdio.h>
int main(){
    int N,x;
    x=1;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=2; j<=i;j++){
            printf("%d",x++);
        }
        printf("\n");
    }
}