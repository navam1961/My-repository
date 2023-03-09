#include<stdio.h>
#include<math.h>
int main() {
    int h,b,p;
    printf("enter b: ");
    scanf("%d",&b);
    printf("Enter p: ");
    scanf("%d",&p);
    h = sqrt(pow(b,2)+pow(p,2));
    printf("h is: %d",h);
    return 0;
}