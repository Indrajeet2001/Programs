#include<stdio.h>

int DisplayW(int iValue)
{
    int iCnt = 0;

    while(iCnt < iValue)
    {
        printf("Jay Ganesh..\n");
        iCnt++;
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the no of iterations :\n");
    scanf("%d",&iNo);

    DisplayW(iNo);

    return 0;
}