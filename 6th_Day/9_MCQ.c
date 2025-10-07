#include <stdio.h>
int main() {
    int a = 5, b = 3, c, d;
    c = a < b && a > 2;
    d = a < b || b > 2;
    printf("%d %d %d %d", a, b, c, d);
    return 0;
}
