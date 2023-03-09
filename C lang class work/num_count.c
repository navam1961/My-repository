#include<stdio.h>
#include<math.h>
int main() {
    int num,originalNum,count,remainder,last_digit,sum;
    printf("Enter a number: ");
    scanf("%d",&num);
    //Counting number of digits
    originalNum = num;
    while(originalNum != 0) {
        originalNum /= 10;
        count++;
    }
    // Digits to the power count 
    while(originalNum != 0) {
        last_digit = originalNum % 10;
        sum = pow(last_digit,count);
        originalNum /= 10;

    }
    printf("%d",sum);

}