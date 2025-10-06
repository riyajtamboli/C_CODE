#include<stdio.h>
void main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int lastDigit = n%10;
    printf("revrese of number : %d",lastDigit);
    n = n/10;
    printf("%d%d", n%10, n/10);
}