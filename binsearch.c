#include <stdio.h>


int main(void){
    int i, data = 20, min=0, max = 9, mid = 4;

    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};



    while (a[mid]!=data&&min<max) {
        if(data<a[mid]){
            max=mid-1;
        }else {
            min = mid+1;
        }

        mid=(min+max)/2;
    }
    if (a[mid]==data) {
        printf("Yes found at %d\n", mid+1);

    }else{
        printf("Not\n");
    }
}
