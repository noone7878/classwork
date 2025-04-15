#include <stdio.h>

int main(void){
    int i, j, n, s;

    for (n = 1; n<= 1000; n++) {

        s = 0;
        for (i = 1; i<=n; i++) {
            if(n%i == 0)
                s = s + i;
        }
        if(s == n){
            printf("%d ", n);

        }
    }
}
