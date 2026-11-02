
#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int iNum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    iNum = iNo;

    if (iNo % 2 == 0 && iNo != 0)
    {
        iNum++;
    }

    for (iCnt = 1; iCnt <= iNum; iCnt++)
    {
        printf("#\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
