// This code prints the ascii value corresponding to that number
#include<stdio.h>
int main() {
    int i = 0;
    while(i <= 256) {
        printf("%d: %c\n",i,i);
        i += 1;
    }
    return 0;
}   