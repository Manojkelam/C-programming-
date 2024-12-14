#include<stdio.h>
void swap(int a,int b);
int main()
{
	int m=22,n=44;
	printf("\n values before swap m=%d and n=%d",m,n);
	swap(m,n);
	
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\n values after swap m=%d and n=%d",a,b);
	
}

