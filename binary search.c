#include<stdio.h>
void main()
{
	int n,a[100],i,key,high,low,mid,loc=-1;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter tyhe elements of array in sorted order\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the key element to be searched\n");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high)
	
	if(key==a[mid])
	{
	
		loc=mid+1;
		break;
    }
	else
	{
		if(key<a[mid])
		high=mid-1;
		else
		low=mid+1;
		
	}

if(loc>0)
printf("\n the element %d id found at %d",key,loc);
else
printf("\n the search is unsuccesful");
}

