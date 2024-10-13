#include <stdio.h>

int main(void)
{
    int origin, i1, i2;

    printf("Enter a two-digit number: ");
    scanf("%d", &origin);
    i1 = origin % 10;
    i2 = (origin - i1) / 10;

    printf("The reversal is: %d%d\n", i1, i2);

    return 0;
}