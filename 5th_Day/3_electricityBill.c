#include<stdio.h>
void main(){
    float unit;
    printf("Enter the unit : ");
    scanf("%f", &unit);

    (unit>0 && unit<100)?printf("Bill = %.2f", unit*1.5):
    (unit>101 && unit<=300)?printf("Bill = %.2f", (100*1.5)+(unit-100)*2.0):
    (unit>=301)?printf("Bill = %.2f", (100*1.5)+(200*2.0)+(unit-300)*3.0)
    :printf("enter valid unit");
}