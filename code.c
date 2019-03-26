#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    printf("\n%d", printf("%*c%*c\r", a, ' ', b, ' '));
    return 0;
}
