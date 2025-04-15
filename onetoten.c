#include <stdio.h>

int main(void){
    int i=0;

    x:

    printf("%d", i);
    i++;
    if (i<=10) {
        printf("%d\n", i);
        i++;
        goto x;
    }


}
