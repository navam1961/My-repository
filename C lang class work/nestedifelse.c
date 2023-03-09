#include<stdio.h>
int main(void) {
    int age,weight,height;
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter weight: ");
    scanf("%d",weight);
    printf("Enter height(in feet): ");
    scanf("%d",&height);
    if(age>=15) {
        if(50<=weight<=100){
            if(height>=5){
                printf("You can join tracking group");
            }
            else {
                printf("Insufficient height!");
            }
        }
        else {
            printf("Insufficient weight!");
        }
    }
    else {
        printf("Insufficient age");
    }
}