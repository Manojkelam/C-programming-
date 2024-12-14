#include<stdio.h>
int main()
{
	int op1,op2;
	char cop;
	//clrscr()
	printf("enter the valid arithm expression");
	scanf("%d%c%d",&op1,&cop,&op2);
	switch(cop)
	{
		case'+':printf("result=%d",op1+op2);
		break;
		case'-':printf("result=%d",op1-op2);
		break;
		case'*':printf("result=%d",op1*op2);
		break;
		case'/':printf("result=%d",op1/op2);
		break;
		case'%':printf("result=%d",op1%op2);
		break;
		default:printf("invalid expression\n");
		
		
	}
}
