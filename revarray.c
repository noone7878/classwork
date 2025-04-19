#include <stdio.h>

int main(void){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int i;

    printf("Reverse Array is : \n");

    for (i = 9; i>=0; i--) {
        printf("%d", a[i]);
    }
}
