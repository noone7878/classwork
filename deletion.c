#include <stdio.h>


int main(void){
    int a[10], data, i, j, n=10;

    printf("Enter 10 elements\n");
    for (i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter data to be deleted\n");
    scanf("%d", &data);

    for (i=0; i<n; i++) {
        if (a[i]==data) {
            for (j=i; j<n; j++) {
                a[j] = a[j+1];
                n--;
            }
        }
    }
    for (i=0; i<10; i++) {
        printf(" %d", a[i]);
    }

}
