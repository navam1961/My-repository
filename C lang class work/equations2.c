#include<stdio.h>
#include<math.h>
int main() {
    float s,u,t,a;
    printf("Enter initial velocity: ");
    scanf("%f",&u);
    printf("Enter time: ");
    scanf("%f",&t);
    printf("Enter accerlation: ");
    scanf("%f",&a);
    s = u*t + (0.5 * a * pow(t,2));
    printf("Distance is: %0.2f", s);
    return 0;

}