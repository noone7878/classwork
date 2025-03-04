#include <stdio.h>

int main(void){
    int n;
    // clrscr();
    printf("Enter any number \n");
    scanf(" %d", &n);
    if(n&1)
        printf("Its odd \n");
    else
        printf("Its even \n");

}
