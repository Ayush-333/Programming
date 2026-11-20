#include <stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            iPos = iCnt;
        }
        iCnt++;
    }
    return iPos;
}

int main()
{
    char arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^\n]s", arr);

    printf("Enter the character: \n");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}