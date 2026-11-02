#include<stdio.h>

void Number(int iNo)
{
    
        if(iNo<=50)
        {
            printf("The number is small");
        }
        else if(iNo > 50 && iNo  <=100)
        {
            printf("The number is medium ");

        }
        else
        {
            printf("the number is large");
        }
    
        printf("\n");
}
int main()
{
    int iValue =0;
    printf("Enter thr number:\n");
    scanf("%d",&iValue);
    Number(iValue);
    return 0;
}