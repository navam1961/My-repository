#include<stdio.h>
int main() {
    int a;
    printf("Enter marks: ");
    scanf("%d",&a);
    if(a<30&&a>0) {
        printf("C Grade!");
    }
    else if(a>=30&& a<70) {
        printf("B grade!");
    }
    else if(a>=70&&a<90) {
        printf("A grade!");
    }
    else if(a>=90&&a<=100) {
        printf("A++ Grade!");
    }
    else {
        printf("WRONG marks!");
    }
    return 0;
}