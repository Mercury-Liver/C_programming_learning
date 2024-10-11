#include <stdio.h>

int main(void)
{
    int dollar, xxbill, xbill, vbill, ibill;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar);

    xxbill = dollar / 20;
    xbill = (dollar - xxbill * 20) / 10;
    vbill = (dollar - xxbill *20 - xbill * 10) / 5;
    ibill = dollar - xxbill * 20 - xbill * 10 - vbill * 5;

    printf("$20 bills: %d\n", xxbill);
    printf("$10 bills: %d\n", xbill);
    printf("$5 bills: %d\n", vbill);
    printf("$1 bills: %d\n", ibill);

    return 0;
}