#include<stdio.h>


struct hello
{
	float f;
	int no;
	struct Demo
	{
		int i;
		int j;
	}dobj;
};
int main()
{

struct hello hobj;
hobj.f=10.11;
hobj.no=11;
hobj.dobj.i=21;
hobj.dobj.j=51;
printf("%d\n",hobj.dobj.i );

return 0;
}