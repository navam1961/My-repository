// Program to print numbers from 0 to n (n is given by user)
#include<stdio.h>
int main() {
    // int i = 0;
    // int n;
    // printf("Enter n: ");
    // scanf("%d",&n);
    // while(i<=n) {
    //     printf("%d\n",i);
    //     i++;
    // }
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i = 0;i<=n;i++) {
        printf("%d\n",i);
    }
    return 0;
}