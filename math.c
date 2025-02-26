#include <stdio.h>
#include <math.h>

int main(void){
    float n, ans;
    printf("Enter any number \n");
    scanf("%f", &n);
    ans = sqrt(n);
    printf("Square Root = %f", ans);

    int base, power, ans1;
    printf("Enter Base and Power");
    scanf("%d %d", &base, &power);
    ans1 = pow(base, power);
    printf("answer = %d", ans1);
    // getch();

}
