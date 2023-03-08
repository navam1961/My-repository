#include<stdio.h>
int sum(int n) {
    if (n == 1) {
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Sum of numbers is: %d",sum(a));
    return 0;
}