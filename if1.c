#include<stdio.h>
//if else
int main()
{
	auto int Marks=0;


	printf("Enter your marks\n");
	scanf("%d",&Marks);

	printf(" Your Entered Marks:%d\n",Marks);

	if(Marks>=60)
	{
		printf("First Class\n");
	}
	else
	{
		printf("Not First Class\n");
	}

	return 0;
}