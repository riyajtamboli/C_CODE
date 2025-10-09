#include<stdio.h>
void main(){
    int r;
    float area;

    printf("Enter the value of radius of circle: ");
    scanf("%d",&r);

    area=3.14*r*r;
    printf("Area of circle is: %.2f",area);
}