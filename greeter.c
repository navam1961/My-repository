// Function that prints 'Namaste' if user is Indian and 'Bonjour' if user is french
#include<stdio.h>
void Nam() {
    printf("Namaste");

}
void Bon() {
    printf("Bonjour!");
}

int main() {
    
    char str[20];
   gets(str);
//    printf("Hi there!\n Enter you name:");
   printf("%s""","Glad to see you\n", str);
   
   char ch;
   printf("%s""","Enter I if you are Indian and F if you are French: ",str);
   scanf("%c",ch);
    if(ch=='I') {
        Nam();
    }
    else if(ch=='F') {
        Bon();
    }
    else{printf("Incorrect input!");
    }
    return 0;


}