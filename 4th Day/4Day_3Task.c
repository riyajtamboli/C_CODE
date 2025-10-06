#include<stdio.h>
void main(){
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);

    (age>0)?(age<5)?printf("Not eligible (minimum age is 5 years)"):printf("Eligible for Aadhaar card"):printf("Enter valid age");
}