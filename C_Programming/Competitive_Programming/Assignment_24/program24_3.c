#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            return iCnt;
        }
        iCnt++;
    }
    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}