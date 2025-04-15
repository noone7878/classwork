#include <stdio.h>

int main(void){

    int n, r, s = 0, save;

    printf("Enter any number\n");
    scanf(" %d", &n);
    save = n;
    while(n>0){
        r = n%10;
        s = s*10+r;
        n = n/10;
    }

    if(s == save){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
}
