#include <stdio.h>


int main() {
    float x,y;
    x=3.14;
    y=2.0;
    printf("Enter the first floating-point number: ");
    scanf("%f",&x);
    printf("Enter the first floating-point number: ");
    scanf("%f",&y);
    printf("product: %.2f\n", x*y);
    return 0;
}