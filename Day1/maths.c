#include <stdio.h>

int main(void)
{
    float x, y;
    printf("Enter an amount: ");
    scanf("%f", &x);
    y = 3 * (x*x*x*x*x) + 2 * (x*x*x*x) - 5 * (x*x*x) - (x*x) + 7 * x - 6;
    printf("The amswer is: %.1f", y);
}