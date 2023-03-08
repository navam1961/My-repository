#include<stdio.h>

char numberchecker(int n) {
    n>0?printf("Natural number\n"):printf("Not a natural number\n");
    
}
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int r;
    r = numberchecker(a);
    printf("%c\n",r);
    return 0;

}