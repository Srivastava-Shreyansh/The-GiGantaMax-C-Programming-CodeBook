/*Create a structure representing a bank account of a customer. What fields did you use and why?
 */
#include <stdio.h>
struct Bank_Account
{
    char name[30];
    int AccNo;
    char IFSC[15];
    float balance;
};
int main()
{
    struct Bank_Account b;
    printf("Enter your name:");
    scanf(" %[^\n]", b.name);

    printf("Enter your Account Number:");
    scanf("%d", &b.AccNo);

    printf("Enter your IFSC Code:");
    scanf("%s", b.IFSC);

    printf("Enter your Balance Amount:");
    scanf("%f", &b.balance);

    printf("\n--- Bank Account Details ---\n");
    printf("The Name of the Account Holder is %s\n", b.name);
    printf("The Account Number is %d\n", b.AccNo);
    printf("The IFSC Code is %s\n", b.IFSC);
    printf("The Account's Balance Amount is %.2f\n", b.balance);
    return 0;
}