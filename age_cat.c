#include<stdio.h>
int main() {
    int a;
    printf("Enter age: ");
    scanf("%d",&a);
    if(a<13&&a>0) {
        printf("Underage");

    }
    if(a>=13&&a<18) {
        printf("Teenager");
    }
    if(a>=18&&a<60) {
        printf("Adult");

    }
    if(a>=60) {
        printf("Old Age");
    }
    if(a<=0) {
        printf("Please enter valid age!");
    }
}