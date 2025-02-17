#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int i;
    for(i=0;i<N;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
    }

    return 0;
}
