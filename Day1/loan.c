#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment, rate;
    float iremain, iiremain, iiiremain;                                     //疑似古罗马代码流出

    printf("Enter amount of loan: ");                                       //输入各种信息
    scanf("%f", &loan);
    printf("Enter interset rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    rate = (interest_rate / 100) / 12 + 1;                                  //美妙计算时间
    iremain = (loan * rate) - monthly_payment;
    iiremain = (iremain * rate) - monthly_payment;
    iiiremain = (iiremain * rate) - monthly_payment;

    printf("Balance remaining after first payment: $%.2f\n", iremain);      //输出结果
    printf("Balance remaining after second payment: $%.2f\n", iiremain);
    printf("Balance remaining after third payment: $%.2f\n", iiiremain);

    return 0;
}