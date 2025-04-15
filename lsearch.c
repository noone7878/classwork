#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a[10], i, data;
    printf("Enter 10 Elements\n");

    for (i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter Data for searching \n");
    scanf("%d", &data);

    for (i=0; i<10; i++) {
        if(a[i]==data){
            printf("Yes found at = %d", i+1);
            exit(0);
        }
    }
    printf("Data not found\n");
}
