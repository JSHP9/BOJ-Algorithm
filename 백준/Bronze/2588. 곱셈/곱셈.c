#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int b01 = b % 10;
    int b03 = b / 100;
    int b02 = (b % 100) / 10;
    printf("%d\n", a * b01);
    printf("%d\n", a * b02);
    printf("%d\n", a * b03);
    printf("%d\n", a * b);
}