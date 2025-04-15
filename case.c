#include <ctype.h>
#include <stdio.h>

int main(void){
    char ch;
    printf("Enter the character: \n");
    scanf("%c", &ch);
    ch = toupper(ch);

    switch (ch) {
        case 'A':
        case 'E':
        case 'C':
        case 'I':
        case 'O':
        case 'U':
        printf("Vowel\n");
        break;
        default:printf("Not Vowel\n");
        break;
    }
}
