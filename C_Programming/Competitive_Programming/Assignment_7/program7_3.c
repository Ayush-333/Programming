//Qnumberline foe entered no
//Q: accepting no (as freq) printg no till the entered number
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt= -iNo ; iCnt <=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    Display(iValue);
    return EXIT_SUCCESS;
}