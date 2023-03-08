// Program to convert temperature (cel to far & vice-versa)
#include<stdio.h>

/// @brief function to convert fahrenheit to celcius
void fartocel() {
    int far, cel;
    far = ((9/5) * cel) +32;
    return 1;
}
/// @brief function to convert celsius to fahrenheit
void celtofar() {
    int cel,far;
    cel = ((5/9))*(far-32.0);
    return 0;


}
int main() {
    printf("Hi there, Dear user\n. This program will help you convert temperature");
    printf("Enter 'c2f' for cel to fahrenheit or 'f2c' for fahrenheit to celsius");
    return 0;
}
   