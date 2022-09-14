#include<stdio.h>
////////////////////////////////////////////
//
// function name : Addition
// Input         : Two integer
// output        : integer
// Description   : It is use to perform Addition
// Author		 : Prasad Kailasrao Jadhav
// Date			 : 05/03/2022
//
////////////////////////////////////////////
int Addition(int iNo1,int iNo2)
{
auto int iAns =0;

iAns=iNo1+iNo2;
return iAns;
}
//entry point function
int main()
{
	auto int ivalue1=0,ivalue2=0;
	auto int iret=0;

	printf("Enter first no\n");
	scanf("%d",&ivalue1);

	printf("Enter Second no\n");
	scanf("%d",&ivalue2);

	iret=Addition(ivalue1,ivalue2);
	printf("Addition is : %d\n",iret);

	return 0;
}