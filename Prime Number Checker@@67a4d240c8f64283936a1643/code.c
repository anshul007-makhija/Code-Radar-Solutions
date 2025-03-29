#include <stdio.h>
void primenumber(int t){
    if(t<=1){
        printf("0");
    if(t%400!=0){
        printf("0");
    }
    else{
        printf("1");
    }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    primenumber();
    return 0;
}