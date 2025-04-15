#include <stdio.h>

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

    if (opr < 5 && opr > 0) {
        switch (opr) {
            case 1:
                ans = a + b;
            break;
            case 2:
                ans = a - b;
            break;
            case 3:
                ans = a*b;
            break;
            case 4:
                ans = a/b;
            break;
        }
    }else {
        printf("Invalid Choice Code Exit \n");
    }

    printf("Answer = %d \n", ans);

    return 0;
}
