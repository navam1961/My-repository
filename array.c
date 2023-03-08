#include<stdio.h>
int main() {
    int a[5],i,n,large;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
large = a[0];
for(i=1;i<n;i++) {
    if((a[i])>large) {
        large = a[i];
    }

}
printf("Largest number is: %d",large);
return 0;
}