#include<stdio.h>
#include<conio.h>
int main() {
    int i = 0;
    while(i <= 256) {
        printf("Character linked with %d is: %c\n",i,i);
        i += 1;
    }
    printf("Press any key to continue...");
    getch();
}