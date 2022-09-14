#include<stdio.h>
int main()
{
	int i=11;
	char c='A';
	float f=10.11;
	double d= 20.11;

	void *ptr= NULL;
	ptr = &i;
	printf("%d\n",*(int*)ptr );

	ptr=NULL;
	ptr=&f;
	printf("%f\n",*(float*)ptr);


	ptr=NULL;
	ptr=&c;
	printf("%c\n",*(char*)ptr);


	ptr=NULL;
	ptr=&d;
	printf("%f\n",*(double*)ptr);

	return 0;
}

