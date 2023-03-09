#include<stdio.h>
int main() {
    int year;
    scanf("%f",&year);
    if((year % 4 == 0 && year % 100 != 0) ) {
        printf("%d is leap year",year);
    }
    else {
        printf("%d is not a leap year");
    }
    return 0;
}