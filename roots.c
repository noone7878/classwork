#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, c;
    float d;

    printf("Enter 3 number \n");
    scanf("%d %d %d ", &a, &b, &c);

    d = ((-b) + sqrt(b*b - 4*a*c))/(2*a);

    printf("%f", d);

}
