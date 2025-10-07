#include<stdio.h>
int main() {    
    int x = 10, y = 20;
int result = (x > y) ? ((x > 15) ? x : y) : ((y > 15) ? y : x);
printf("%d", result);
}