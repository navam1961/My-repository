#include<stdio.h>
int main() {
    int a;
    printf("Enter marks: ");
    scanf("%d",&a);
    (a>30&&a<=100)?printf("PASS!"):printf("FAIL!");
    return 0;
}