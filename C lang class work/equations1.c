#include<stdio.h>
float main() {
    float v,u,a,t;
    printf("Enter initial velocity: ");
    scanf("%f",&u);
    printf("Enter value of accerlation: ");
    scanf("%f",&a);
    printf("Enter time: ");
    scanf("%f",&t);
    v = u + a*t;
    printf("Final velocity is %0.2f",v);
    return 0;
}