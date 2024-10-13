#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5, origin;
    i1 = i2 = i3 = i4 = i5 = 0;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &origin);

    i1 = origin % 8;
    i2 = origin / 8 % 8;
    i3 = origin / 8 / 8 % 8;
    i4 = origin / 8 / 8 / 8 % 8;
    i5 = origin / 8 / 8 / 8 / 8 %8;

    printf("In total, your number is: %d%d%d%d%d", i5, i4, i3, i2, i1);

    return 0;
}