#include<stdio.h>

int Multipilcation(int iValue1, int iValue2)
{
    int iAns = 0;

    iAns = iValue1 * iValue2;

    return iAns;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iMult = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo1);

    printf("Enter second number : \n");
    scanf("%d",&iNo2);

    printf("First number is : %d\n",iNo1);

    printf("Second number is : %d\n",iNo2);

    iMult = Multipilcation(iNo1,iNo2);

    printf("Multiplication is : %d\n",iMult);

    return 0;
}