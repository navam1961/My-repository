#include<stdio.h>
float celtofar(float cel) {
    float far;
    far = cel *9/5 + 32;
    return far;  
}
float main() {
    // float f;
    // printf("Enter temperature in celcius:");
    // scanf("%f",&f);
    printf("%f",celtofar(45));
    return 0;
}