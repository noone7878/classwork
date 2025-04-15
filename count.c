#include <stdio.h>

int main(void){
    int n, s, r, even = 0, odd = 0;
    printf("Enter any number\n");
    scanf(" %d", &n);

    while(n>0){
        r = n%10;
        if(n%2==0){
            even++;
        }else {
            odd++;
        }
        n = n/10;
    }
    printf("even = %d\n odd = %d\n ", even, odd);
}
