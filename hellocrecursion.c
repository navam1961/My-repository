// #include<stdio.h>
// void Hello(int a) { 
//     //YOu SHOULD MUST HAVE A VISHWAS ON FUNCTION THAT IT WILL DO YOUR WORK
//     if(a==1) {
//         return;
//     }

//     printf("Hello World\n");
//     Hello(a-1);
//     }
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     Hello(5);
//     return 0;
// }
#include<stdio.h>
/// @brief gives the factorail of number 
/// @param n is any natural number
/// @return factorial
float fact(float n) {
    if(n==1) {
        return 1;
    }
    float factNm1 = fact(n-1);
    float factN = factNm1*n;
    return factN;
}
float main() {
    float n;
    printf("enter n: ");
    scanf("%f",&n);
    printf("Factorial of number is %f",fact(n));
    return 0;
}