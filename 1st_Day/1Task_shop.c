#include <stdio.h>
#include <Math.h>
void main()
{
    float kg, kgp;
    printf("Enter a price of apple per kg : ");
    scanf("%f", &kgp);
    printf("Enter how many kg of banana you want to buy : ");
    scanf("%f", &kg);
    printf("Single Apple Price : %f\n", (kg * 1000) / (kgp * 2));
    float BPrice = 60;
    float OPrice = 80;
    float AppleCost = kg * kgp;
    float Bkg;
    printf("Enter how many kg of banana you want to buy : ");
    scanf("%f", &Bkg);
    float Okg;
    printf("Enter how many kg of orange you want to buy : ");
    scanf("%f", &Okg);
    printf("The cost of Apple : %f\n", AppleCost);
    printf("The cost of Banana : %f\n", Bkg * BPrice);
    printf("The cost of Orange : %f\n", Okg * OPrice);
    float BananaCost = BPrice * Bkg;
    float OrangeCost = OPrice * Okg;
    float total = BananaCost + OrangeCost + AppleCost;
    printf("The overall bill amount : %f\n", total);
}