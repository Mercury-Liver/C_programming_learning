#include <stdio.h>

int main(void)
{
    int origin, i1, i2, i3;

    printf("Enter a three-digit number: ");
    scanf("%d", &origin);
    i1 = origin % 100 % 10;
    i3 = origin / 100;
    i2 = (origin - i1 - (i3 * 100)) / 10;

    printf("The reversal is: %d%d%d\n", i1, i2, i3);

    return 0;
}