#include <stdio.h>

#define C_NUM (4.0f / 3.0f)
#define PI 3.14

int main(void)
{
    float r;

    printf("Enter r of ball: ");
    scanf("%f", &r);
    printf("Volume of ball is: %.1f\n", (C_NUM * PI * r * r * r));

    return 0; 
}