#include <stdio.h>

int main(void){
    int n;
    printf("Enter any number");
    scanf("%d", &n);
    if(n==0){
        printf("Zero");
    }else {
        if (n<0) {
            printf("Negetive");
        }else {
            printf("Positive");
        }
    }
}
