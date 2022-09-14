#include<stdio.h>

//0 to 10  100
// 10 to 40 500
//40 to ----- 300
//if else ladder
int main()
{

	auto int iAge=0;

	printf("Enter your age\n");
	scanf("%d",&iAge);

	if((iAge>=0)&&(iAge<=10))
	{
		printf("your tikit amount is:100\n");
	}
	else if((iAge>=10)&&(iAge<=40))
	{
		printf("your tikit amount is:500\n");
	}
	else if(iAge>=40)
	{
		printf("your tikit amount is:300\n");
	}


	return 0;
}