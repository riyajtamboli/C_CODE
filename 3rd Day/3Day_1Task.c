#include<stdio.h>
void main(){
    float cp, profit, VAT, sc;
    printf("Enter the cost price : ");
    scanf("%f", &cp);
    printf("Enter the profit : ");
    scanf("%f", &profit);
    printf("Enter VAT : ");
    scanf("%f", &VAT);
    float sp = cp + ((profit/100)*cp);
    printf("Selling price : %.2f \n", sp);
    printf("Enter Service Charge : ");
    scanf("%f", &sc);
    profit = sp - cp;
    printf("profit is : %f \n", profit);

    VAT = (profit/100* sp);
    printf("VAT is : %f \n", VAT);

    sc = (sc/100* sp);
    printf("Service charge is : %f", sc);
    

}