#include<stdio.h>
#include<string.h>
#include<time.h>
void converge(char *targ, char *src);
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
 
    // Storing start time
    clock_t start_time = clock();
 
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
int main(void) {
    char target[80] = "XXXXXXXXXXXXXXXXXXXXXXXXXX";
    converge(target, "You are GAY.");
    delay(0.7);
    printf("%s\n",target);
    return 0;
}
void converge(char *targ,char *src) {
    int i , j;
    printf("%f\n",targ);
    for(i=0 , j = strlen(src); i<= j; i++,j--) {
        targ[i] = src[i];
        targ[j] = src[j];
        printf("%s\n",targ);
        delay(0.7);
    }
}