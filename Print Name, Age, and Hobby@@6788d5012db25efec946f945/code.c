#include <stdio.h>

int main() {
    char x[100];
    int y;
    char z[100];
    scanf("%s%d%s", &x, &y, &z);
    printf("Name: %s\n", x);
    printf("Name: %d\n", y);
    printf("Name: %s", z);
    return 0;
}