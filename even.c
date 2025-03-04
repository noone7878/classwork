#include <stdio.h>

int main(void){
    int n;
    // clrscr();
    printf("Enter any number \n");
    scanf(" %d", &n);
    if(n%2==0){
        printf("Its Even \n");
    }else{
        printf("Its Odd \n");
    }
}
