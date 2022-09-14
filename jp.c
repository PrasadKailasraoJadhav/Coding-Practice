#include<stdio.h>
//Shop
int Addition(int No1,int No2)//Function Defination

{                           //Block chi Survat
int Ans = 0;                //local variable of Addition
Ans = No1+No2;              //Addition by Alu
return Ans;                 //jyane call kela tyala dya 
}                           //Block cha shevt

//Home 
int main()                 //Ithun Program Run Hoto
{                          //Block Start
int A=5,B=5,C=0;           //Local variable of main 
 
                           //C Mhnje rikami Pishvi 
 C=Addition(A,B);          //Function call
 printf("%d",C);           //return value Print Kra  
	return 0;              //os la kalva ki program run zala

}                          //Blok End 
