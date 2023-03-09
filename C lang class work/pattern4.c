#include<stdio.h>
int main() {
    int a = 6, b = 1, i;
    scanf("%d",&i);
    while(i <= 5) {
        printf(" %d %d",a,b);
        a+=1,b+=1,i+=1;
    }
    return 0;
}