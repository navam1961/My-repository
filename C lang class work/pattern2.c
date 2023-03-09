#include<stdio.h>
int main() {
    int n = 1;
    int i;
    printf("Enter i: ");
    scanf("%d",&i);
    while(i <= 10) {
        printf("%d ",n * n);
        i++,n++;
    }
    return 0;
}