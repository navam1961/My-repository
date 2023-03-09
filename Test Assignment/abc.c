#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    // Get coefficients from user
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check if discriminant is negative (complex roots)
    if (discriminant < 0) {
        printf("Roots are complex.\n");
        return 0;
    }

    // Calculate roots
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);

    // Print roots
    printf("Roots are: %lf and %lf\n", root1, root2);

    return 0;
}
