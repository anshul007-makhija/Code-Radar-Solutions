#include <stdio.h>
int main(){
    int N,x;
    x=1;
    scanf("%d",&N);
    for(int i=0;i<=N;i++){
        for(int j=1; j<=i;j++){
            printf("%d",x++);
        }
        printf("\n");
    }
}