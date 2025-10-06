#include<stdio.h>
void main(){
    int adhar, age;

    printf("if you have adhar press 1 else 0 : ");
    scanf("%d", &adhar);
    printf("Enter the age : ");
    scanf("%d", &age);

    (adhar==1)?(age>0)?(age>=18)?printf("Eligible for Driving License"):printf("Not eligible (must be 18+)"):printf("Enter valid age"):printf("Aadhaar card required for license");

}