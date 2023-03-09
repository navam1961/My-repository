#include<stdio.h>
int main() {
    int n = -256;
    while(n <= 256) {
        printf("Character linked with %d is: %c\n",n,n);
        n += 1;
    }
    return 0;
}