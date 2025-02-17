#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int i,j;
    for(i=0;i<N;i++){
        for(j=N;j>=0;j--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
