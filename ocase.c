#include <ctype.h>
#include <stdio.h>

int main(void){
    char ch;
    printf("Enter the character: \n");
    scanf("%c", &ch);
    ch = toupper(ch);

    switch (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
        case 1: printf("Vowel\n");
        case 0: printf("Not Vowel\n");
    }
}
