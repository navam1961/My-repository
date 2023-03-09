// Question 1. 
#include<stdio.h>
float main() {
    float length,width;
    printf("Enter length of ground (in meters): ");
    scanf("%f", &length);
    printf("Enter width of ground (in meters): ");
    scanf("%f", &width);
    printf("Length of carpet required is %f meters\n", length * width);
    printf("Length of rope required is %f meters\n",2*(length+width));
    return 0;
}