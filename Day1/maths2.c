#include <stdio.h>

int main(void)
{
    float x, y;
    
    printf("Enter an amount: ");
    scanf("%f", &x);
    y = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("The amswer is: %.1f", y);

    return 0;
}