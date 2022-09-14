#include<stdio.h>
#include<stdlib.h>
int main()
{
	//int Arr[10];// static memory allocation
	int size = 0;
	int *ptr=NULL;

	printf(" Enter no of element :" );
	scanf("%d",&size);

	ptr = (int*)malloc(size * sizeof(int));
	//step1 = Allocate the memeory
	if(ptr==NULL)
	{
		printf("unable to Allocate memory\n");
		
	}
	else{
		printf(" Memory Succeefully Allocted");
	}
	//step2=use the memory
	free(ptr);//step3=Free the memory

return 0;
}