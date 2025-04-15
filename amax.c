#include <stdio.h>

int main(void){
    int a[5], i, j, max;

    printf("Enter first array \n");


    for (i=0; i<5; i++) {
        scanf("%d", &a[i]);

    }

    max = a[0];

    for (j=0; j<5; j++) {
        if(max<a[j]){
            max=a[j];
        }
    }

    printf("max is %d\n", max);
}
