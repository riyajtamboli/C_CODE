
#include<stdio.h>
int main() {
int a = 10;
int b = 15;
int c = a++ + b--;
printf("a = %d, b = %d, c = %d\n", a, b, c);
return 0;
}
