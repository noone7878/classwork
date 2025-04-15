#include <stdio.h>
#include <stdlib.h>


int main(void){
    int a, b, opr, ans;

    printf("Enter First number \n");
    scanf("%d", &a);
    printf("Enter Second number \n");
    scanf("%d", &b);

    printf(
        "what operation do you want to perform \n 1. addition \n 2. subtraction \n 3. multiplication \n 4. division\n choose the operation "
    );
    scanf("%d", &opr);

    if (opr == 1) {
        ans = a + b;
    }else {
        if (opr ==2 ) {
            ans = a - b;
        }else {
            if (opr == 3) {
                ans = a*b;
            }else {
                if (opr == 4) {
                    ans = a/b;
                }else {
                    if (opr == 5){
                        exit(1);
                    }
                }
            }
        }
    }

    printf("Answer = %d", ans);
}
