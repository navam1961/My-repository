// @brief Character entered by user is upper case or lower case
#include<stdio.h>
int main() {
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z') {
        printf("Capital Letter");
    }
    else if (ch >='a'&& ch<='z') {
        printf("Lower case letter");
    }
    else {
        printf("Not a english letter!");
    }
}