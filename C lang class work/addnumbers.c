#include<stdio.h>
int addnumber(int x, int y);
int main() {
    int a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum = addnumber(a,b);
    printf("Sum of numbers is: %d",sum);
    return 0;
}
int addnumber(int x, int y) {
    int result = x + y;
    return result;
}