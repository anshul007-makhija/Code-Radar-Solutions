#include <stdio.h>


int main() {
    scanf("%d",&x);
    scanf("%d",&y);
    char True;
    char False;
    if(x>y){
        printf("%c",1);
    }
    else if(y>x){
        printf("%c",0);
    }
    
    return 0;
}