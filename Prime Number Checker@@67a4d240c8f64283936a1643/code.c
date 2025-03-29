#include <stdio.h>
void isprime(){
    printf("1");
void notprime(){
    printf("0");
}
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}