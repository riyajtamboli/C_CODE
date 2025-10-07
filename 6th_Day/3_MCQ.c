#include<stdio.h>
int main() {
int a = 5, b = 10, c = 15;
int result = !(a <= b) && !(b != c) && !(c >= a);
printf("result = %d\n", result);
return 0;
}
