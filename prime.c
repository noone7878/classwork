#include <stdio.h>

int main(void){
    int i, j, n, s;

    for (j = 1; j<= 1000; j++) {
        n = j;
        s = 0;
        for (i = 1; i<=n; i++) {
            if(n%i == 0)
                s++;
        }
        if(s == 2){
            printf("%d ", n);

        }
    }
}
