
#include <stdio.h>

int DollarToINR(int iNo)
{
    int iResult = 0;

    iResult = iNo * 70;

    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter amount in dollars: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Amount in INR: %d\n", iRet);

    return 0;
}
