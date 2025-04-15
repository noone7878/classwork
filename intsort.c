#include <stdio.h>

int main(void){
    int i, j, temp;

    int a[5] = {3, 5, 4, 1, 2};

    //logic of sorting
    for (i=0; i<5; i++) {
        for (j = i+1; j<5; j++) {
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array\n");
    for(i=0; i<5; i++){
        printf("%d", a[i]);
    }

}
