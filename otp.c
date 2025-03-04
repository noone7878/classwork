#include <stdio.h>
#include <stdlib.h>

int main(void){
    int otp, length;

    printf("Enter length of the OTP required \n");
    scanf("%d", length);

    otp = length + rand() % (1);
}
