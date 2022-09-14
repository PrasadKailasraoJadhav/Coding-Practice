#include<stdio.h>

//structure declaration
struct Demo
{
	int iValue;
	float fValue;
	int value;
	double dValue;
};
int main()
{
	
 struct Demo obj;//Structure object creation
obj.iValue=10;
obj.fValue=10.20;
obj.d
printf("%d\n",obj.iValue);
printf("%d\n",sizeof(obj) );

	return 0;
}