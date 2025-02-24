#include <stdio.h>

int main(void){
    int a;
    float b;
    char c;


    printf("enter int\n");
    scanf("%d", &a);
    printf("enter float\n");
    scanf("%f", &b);
    printf("enter char\n");
    scanf(" %c", &c); //leave space to make it work

    printf("%d %f %c", a, b, c);

}
