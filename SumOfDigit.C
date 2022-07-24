#include<stdio.h>
/*
    Sum Of Digits

    Input: 3561
    Output : 15    (3+5+6+1)
*/
int SumOfDigits(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int iDigit=0;
    int iSum=0;
    while (iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iSum= iSum+iDigit;
    }
    return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=SumOfDigits(iValue);
    printf("\n Sum Of Digits = %d",iRet);
    return 0;

}