// C Program for Arithmetic Operation
#include <stdio.h>
int main() {    

    int number1, number2, A;
    float B;
    
    printf("Enter first integers number: ");
    scanf("%d", &number1);

    printf("Enter second integers number: ");
    scanf("%d", &number2);

    // Calculating sum
    A = number1 + number2;      
    
    printf("The sum of two given integer is: ");
    printf("%d",A);
    printf("\n");
    
    // Calculating difference
    A = number1 - number2;      
    
    printf("The difference of two given integer is: ");
    printf("%d",A);
    printf("\n");

    // Calculating Multiplication
    A = number1 * number2;      
    
    printf("The Multiplication of two given integer is :");
    printf("%d",A);
    printf("\n");

    // Calculating division
    B = (float)number1 / number2;      
    
    printf("The division of two given integer is :");
    printf("%f",B);
    printf("\n");

    return 0;
}