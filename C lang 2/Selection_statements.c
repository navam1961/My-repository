#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int magic; // Magic number
    int guess; //Users guess
    magic = rand(); //Generate the magic number
    printf("Guess the magic number: ");
    scanf("%d",&guess);
    if(guess == magic) {
        printf("**RIGHT**");
    }
    else {
        printf("TRY AGAIN!\n");
    }
    return 0;
}