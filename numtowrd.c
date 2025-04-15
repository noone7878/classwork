#include <stdio.h>

int main(void){
    int num;
    printf("Enter the number: ");
    scanf(" %d", &num);
    switch (num/100) {
        case 1:
        printf("one hundred\n");
        break;
        case 2:
        printf("two hundred\n");
        break;
        case 3:
        printf("three hundred\n");
        break;
        case 4:
        printf("four hundred\n");
        break;
        case 5:
        printf("five hundred\n");
        break;
        case 6:
        printf("six hundred\n");
        break;
        case 7:
        printf("seven hundred\n");
        break;
        case 8:
        printf("eight hundred\n");
        break;
        case 9:
        printf("nine hundred\n");
        break;
    }
    switch ((num/10)%10) {
        case 2:
        printf("twenty\n");
        break;
        case 3:
        printf("thirty\n");
        break;
        case 4:
        printf("fourty\n");
        break;
        case 5:
        printf("fifty\n");
        break;
        case 6:
        printf("sixty\n");
        break;
        case 7:
        printf("seventy\n");
        break;
        case 8:
        printf("eighty\n");
        break;
        case 9:
        printf("ninety\n");
        break;
    }
    switch (num%10) {
        case 1:
        printf("one \n");
        break;
        case 2:
        printf("two \n");
        break;
        case 3:
        printf("three \n");
        break;
        case 4:
        printf("four \n");
        break;
        case 5:
        printf("five \n");
        break;
        case 6:
        printf("six \n");
        break;
        case 7:
        printf("seven \n");
        break;
        case 8:
        printf("eight \n");
        break;
        case 9:
        printf("nine \n");
        break;
    }
}
