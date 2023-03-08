#include<stdio.h>
int sum(int a, int b) {
   return a + b;
}
int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    int s = sum(a,b);
    printf("%d",s);
    return 0;
}