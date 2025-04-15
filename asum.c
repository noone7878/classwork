#include <stdio.h>

int main(void){
    int arr1[] = {1,2,44,65,68,23};
    int arr2[] = {23, 43, 5, 3, 54};
    int arr3[6], i, j, s;

    s = sizeof(arr1)/sizeof(arr1[0]);



    for (i=0; i<s; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }

    for (j = 0; j<s; j++) {
        printf("%d + %d = %d\n", arr1[j], arr2[j], arr3[j]);
    }
}
