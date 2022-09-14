#include<stdio.h>
int main()
{
	int no = 11;
	char ch ='A';
printf("%d\n",no);
printf("%c\n",ch );

printf("Address of no is :%u\n",&no);
printf("Address of no is :%u\n",&ch);
printf("size of no is :%d\n",sizeof(no));
printf("size of no is :%d\n",sizeof(ch));
	return 0;
}