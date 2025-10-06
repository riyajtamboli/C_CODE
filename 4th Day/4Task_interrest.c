#include<stdio.h>
void main(){
    int principal = 10000;
    int interest = 5;
    float rate = (float)interest /100;
    int year = 1;
    float pay = (float)principal * rate * year;
    printf("interest pay in year %f", pay);

}