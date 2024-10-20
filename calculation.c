#include <stdio.h>
int main(){
    float num1, num2;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    //addition
    printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);

    //subtraction
    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    
    //multipication
    printf("Multipication: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);

    //devision

    if(num2 !=0){
    printf("Division: %.2f / %.2f = %.2f", num1, num2, num1 / num2);
    } else{
    printf("Error! Division by zero is not allowed.\n");
    }
    return 0;
}