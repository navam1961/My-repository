#include<stdio.h>
#include<conio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[5] = {1,2,3,4,5};
    printf("%d",a[n]);
    printf("\nPress any key to continue...");
    getch();
}