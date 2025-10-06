#include<stdio.h>
void main(){
    int num1, num2;
    char operator;

    printf("Enter the num1 : ");
    scanf("%d", &num1);
    printf("Enter the num2 : ");
    scanf("%d", &num2);
    printf("Enter the operator : ");
    scanf("%c", &operator);
    operator = getchar();

    (operator=='+')?printf("Result = %d", num1+num2):(operator=='-')?printf("Result = %d", num1-num2):
    (operator=='*')?printf("Result = %d", num1*num2):(operator=='/')?(num1>0 && num2 > 0)
    ?printf("Result = %d", num1/num2):printf("Division by zero not allowed"):printf("Invalid operator");
}
