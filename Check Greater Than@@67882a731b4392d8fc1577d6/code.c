#include <stdio.h>


int main() {
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    char True=1;
    char False=0;
    if(x>y){
        printf("%c",True);
    }
    else{
        printf("%c",False);
    }
    
    return 0;
}