#include<stdio.h>
void main(){
    int b,h;
    float area;

    printf("Enter the value of base and height of triangle: ");
    scanf("%d %d",&b,&h);

    area=0.5*b*h;
    printf("Area of triangle is: %.2f",area);
}