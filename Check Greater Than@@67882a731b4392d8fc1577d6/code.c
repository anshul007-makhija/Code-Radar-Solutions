#include <stdio.h>


int main() {
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    char True;
    char False;
    if(x>y){
        printf("%c",True,x,y);
    }
    else if(y>x){
        printf("%c",False,y);
    }
    
    return 0;
}