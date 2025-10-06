#include<stdio.h>

void main(){
    printf("--------------Welcome to BookWorld--------------\n");
    float amount, discount;
    printf("Enter the amount : ");
    scanf("%f", &amount);
    // discount = discount/100*amount;
    amount<1000 ? printf(" Total : %f", amount): amount>1000 && amount <5000 ? printf("total amount after 5 percentage discount : %.1f", amount - ((float)5/100*amount)): printf("Total amount  %.1f",amount -((float)10/100*amount));


}
