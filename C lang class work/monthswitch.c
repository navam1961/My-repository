#include<stdio.h>
int main(void) {
    int month;
    printf("Enter value of month: ");
    scanf("%d",&month);
    switch(month)  {
        case 1: 
        case 3: 
        case 5: 
        case 7:
        case 8:
        case 10:
        case 12: printf("\n This is a month of 31 days!");
        break;
        case 4:
        case 6:
        case 9:
        case 11: printf("This is a month of 30 days!");
        break;
        case 2: printf("This is  a month 0f 28 and 29 days!");
        break;
    }
    
}