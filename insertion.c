#include <stdio.h>

int main(void){

    int a[10], data, pos, i;

    printf("Enter 10 elements\n");
    for (i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the data\n");
    scanf("%d", &data);

    printf("enter the positon\n");
    scanf("%d", &pos);

    for (i=9; i>=pos; i--) {
        a[i] = a[i-1];
    }

    a[i]=data;

    printf("Now array is \n");

    for (i=0; i<10; i++) {
        printf("%d\n", a[i]);
    }
}
