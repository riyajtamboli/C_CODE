#include<stdio.h>
void main(){
    float price, discount;
    printf("Enter the price : ");
    scanf("%f", &price);
    printf("Enter the discount : ");
    scanf("%f", &discount);

    (discount > 0 && discount <=100 && price>0) ? printf("Final price : %.2f", price - discount/100 * price ):printf("discount not valid");

}