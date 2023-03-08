#include<stdio.h>
int main() {
   int n;
   printf("Enter n: ");
   scanf("%d", &n);
   int row = 1;
   while (row <= n) {
      int col = 1;
      while(col <= row) {
         printf("%d", col);
         col += 1;
      }
      row += 1;
      printf(" ");
   }
   return 0;
}