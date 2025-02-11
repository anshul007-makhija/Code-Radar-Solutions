#include <stdio.h>


int main() {
    int x=5;
    int y=3;
    scanf("%d",&x);
    scanf("%d",&y);
    char True;
    char False;
    if(x>y){
        printf("%c",True);
    }
    else{
        printf("%c",False);
    }
    
    return 0;
}