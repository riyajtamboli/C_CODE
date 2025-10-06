#include<stdio.h>
void main(){
    int a ;
    printf("Enter a num : ");
    scanf("%d", &a);
    a%10 >=5 && printf("%d", (a/10+1)*10) || printf("%d", (a/10)*10);   
}