#include<stdio.h>
int main() {
    int o = 1, e = 2,i;
    scanf("%d",&i);
    while(i <= 5) {
        printf(" %d %d",o*o*o,e*e);
        o+=2,e+=2,i++;
    }
    return 0;
}