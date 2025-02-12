#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("Vowel");
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("Consonant");
    }
    else if((!(ch>='a' && ch<='z') || !(ch>='A' && ch<='Z'))){
        printf("Digit");
    }
    else if(ch==` || ch==~||ch==!||ch==@||ch==#||ch==$||ch==$||ch==%||ch==^||ch==&||ch==*||ch==(||ch==)){
        printf("Special Character");
    }
    

    return 0;
}