#include<stdio.h>
float squarearea() {
    float a;
    printf("Enter side: ");
    scanf("%f",&a);
    float area = a*a;
    printf("%f",area);
    return 0;
}
float circlearea() {
    float r;
    printf("Enter radius: ");
    scanf("%f",&r);
    float area = 3.14*r*r;
    printf("%f",area);
    return 0;
}
float rectanglearea() {
    float a ,b;
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    float area = a*b;
    printf("%f",area);
    return 0;
}
int main() {
    char ch;
    printf("Enter C for circle R for rectangle and S for square area: ");
    scanf("%c",&ch);
    if(ch=='C') {
        circlearea();
    }else if(ch=='R') {
        rectanglearea();
    }else if(ch=='S') {
        squarearea();
    } else {
        printf("Invalid input!");
    }
    return 0;
}