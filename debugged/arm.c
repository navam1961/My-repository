#include<stdio.h>
#include<math.h>
int main()
{
    int num, count = 0,remainder,result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        num /= 10;
        count++;
    }
    while(num != 0) {
        remainder = num % 10;
        result += pow(remainder,count);
        num /= 10;
    }
    printf("%d",result);
    return 0;
    
}
