#include<stdio.h>
void main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf(n%2==0?"Even":"Odd");
}