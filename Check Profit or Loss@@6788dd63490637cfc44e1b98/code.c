#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int CP;
    int SP;
    scanf("%d %d",&CP,&SP);
    if(SP>CP){
        printf("Profit");
    }
    else if (SP<CP){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}