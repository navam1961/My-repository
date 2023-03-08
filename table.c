#include<stdio.h>
int printtable(int n) {
    for(int i = 0;i<=10;i++) {
        printf("%d\n",i*n);
    }
}
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printtable(a);
    return 0;
}