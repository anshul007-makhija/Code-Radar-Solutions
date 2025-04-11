#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=10;i++){
        for(int j=1;j<=i;j++){
            printf("%d",N*j);
        }
        printf("\n")
    }
    return 0;
}