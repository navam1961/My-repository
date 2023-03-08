#include<stdio.h>
#include<math.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int sq;
    sq = pow(a,2);
    printf("%d",sq);
    return 0;
}