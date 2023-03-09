#include<stdio.h>
float main() {
    float a,b;
    char ch;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
    printf("Choose operator '+','-','*','/': ");
    scanf("%s",&ch);
    switch(ch) {
        case '+': printf("Sum of numbers is: %f",a+b);
        break;
        case '-': printf("Subtraction of numbers is %f",a-b);
        break;
        case '*': printf("Multiplication of numbers is: %f",a*b);
        break;
        case '/': printf("Divison of numbers is: %f",a/b);
        break;
        default: printf("Incorrect operator!");
    
    }
    return 0;
}