#include <stdio.h>


int main() {
    int x=5;
    int y=3;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y){
        printf("%d",True);
    }
    else if(y>x){
        printf("%d",False);
    }
    
    return 0;
}