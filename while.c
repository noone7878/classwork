#include <stdio.h>

int main(void){

    int n, r, s = 0;
    printf("Enter any number\n");
    scanf(" %d", &n);
    while(n>0){
        r = n%10;
        if(n%2==0){

            s = s + r;

        }
        n = n/10;
    }

    printf("Sum of digit = %d\n", s);
}
