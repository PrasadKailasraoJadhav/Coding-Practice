#include<stdio.h>
int Addition(int No1,int No2)
{
 int Ans=0;
 Ans=No1+No2;

return Ans;
}
int main()
{
int A=11;
int B=10;
int c=0;

c=Addition(A,B);
printf("%d",c);

return 0;
}