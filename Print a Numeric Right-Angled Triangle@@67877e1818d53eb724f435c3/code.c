#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<N-i;j++){
            printf("[0,N]");
        }
    }
    return 0;

}