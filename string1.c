#include<stdio.h>
#include<string.h>
int main()
{
	//First Way
	char Arr[5]={'a','b','c','d','\0'};

	//Second Way
	char Brr[5]="abcd";

	printf("%s\n",Arr);
	printf("%s\n",Brr);

	printf("%c\n",Arr[0]);
	printf("%c\n",Brr[1]);
	printf("%c\n",Arr[2]);
	printf("%c\n",Brr[3]);
	//printf("%c\n",Brr[4]);//Optionals

	printf("size of Arr:%d\n",sizeof(Arr));
	printf("size of Brr:%d\n",sizeof(Brr));

	printf("Length of Arr:%d\n",strlen(Arr));
	printf("Length of Brr:%d\n",strlen(Brr));
	return 0;
}