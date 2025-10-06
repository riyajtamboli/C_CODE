#include<stdio.h>
void main(){
int num1, num2, num3;
printf("Enter the Number : ");
scanf("%d%d%d", &num1, &num2, &num3);


// (num1>num2 && num1> num3)?printf("maximum : %d",num1):(num2>num3)?printf("maximum : %d",num2):printf("maximum : %d",num3);
(num1>num2)?(num1>num3)?printf("maximum : %d",num1):printf("maximum : %d",num3):(num2>num3)?printf("maximum : %d",num2):printf("maximum : %d",num3);
}
