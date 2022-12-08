#include<stdio.h>

void Display()
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <= 10)
    {
        printf("Marvellous : %d\n",iCnt);
        iCnt++;
    }
    
    
}

int main()
{
    
    Display();

    return 0;
}