#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 6; i++) {
        for (j = i; j <= i*6; j+=i) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
