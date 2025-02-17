#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int i;
    int j;
    for(i=N;i>=1;i++){
        for(j=0;j<N-1;j++)
        printf("*\n");
    }

    return 0;
}
