#include <stdio.h>

int main() {

    float length, width;


    printf("Enter the length of the square: ");
    scanf("%f", &length);

    printf("Enter the width of the square: ");
    scanf("%f", &width);


    float area = length * width;

    printf("The area of the square is: %f square units\n", area);

    return 0;
}
