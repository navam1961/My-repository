//Program to print price of items with GST


#include<stdio.h>

int main() {
float price[3];
printf("enter price  of 1st item:");
scanf("%f", &price[0]);

printf("enter price of 2nd item :");
scanf("%f", &price[1]);

printf("enter price of third item :");
scanf("%f", &price[2]);

printf("GST is : %f \n", 0.18 *(price[0]) + 0.18 *(price[1])+ 0.18 *(price[2]));
printf("Final price is :%f",  (0.18 *(price[0]) + 0.18 *(price[1])+ 0.18 *(price[2])) + (price[1]+price[2]+price[3]));


return 0;
}