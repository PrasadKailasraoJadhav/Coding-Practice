#include<stdio.h>
//1 8
//2  9
// if else
int main()
{
	auto int istd=0;

	printf("Enter your standard");
	scanf("%d",&istd);

	if(istd==1)
	{
		printf("your exam is at 8\n");
	}
	else if(istd==2)
	{
		printf("your exam is at 9\n");
	}
	else if(istd==3)
	{
		printf("your exam is at 10\n");
	}
	else if(istd==4)
	{
		printf("your exam is at 11\n");
	}
	else if(istd==5)
	{
		printf("your exam is at 12\n");
	}
	else
	{
		printf("Invalid Stamdard");
	}



	return 0;
}