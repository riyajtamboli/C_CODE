#include<stdio.h>
void main(){
    int a = 123;
    
    int rem = a % 10;
    int secRem = (a /10) ;
    int firstDig = secRem /10;
    int sum = rem +firstDig;
    printf("%d", sum);
}
