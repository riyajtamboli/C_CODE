#include <stdio.h>
int main() {
int a = 3;
int b = 4;
int result = (a += b) * (b -= 2);
printf("result = %d\n", result);
return 0;
}
