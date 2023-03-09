#include<stdio.h>
int fact(int n) {
    if(n == 1) {
        return 1;
    }
int    factNm1 = fact(n-1);
int factN = factNm1 * n;
return factN;

}
int main() {
    int n;
    scanf("%d",&n);
    printf("Factorial of numbers is %d",fact(n));
    return 0;
}