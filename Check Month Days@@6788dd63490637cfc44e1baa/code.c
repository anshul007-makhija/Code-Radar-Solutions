#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int m;
    scanf("%d",&m);
    if((m==1) || (m==3) || (m==5) || (m==7) || (m==8) || (m==10) || (m==12)){
        printf("31");
    }
    else(m==2){
        printf("28");
    }
    else{
        printf("30");
    }
    return 0;
}