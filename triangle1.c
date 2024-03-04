#include <stdio.h>

int main() {

    float base, height;


    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);


    float area = 0.5 * base * height;


    printf("The area of the triangle is: %f square units\n", area);

    return 0;
}
