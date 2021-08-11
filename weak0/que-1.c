#include<stdio.h>
void main()
{
	int i,n,j,arr[60],x,z=0;
	printf("enter the no of test case ");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
	printf("enter the no of elements in the array \n ");
	scanf("%d",&n);
	printf("enter the elements of array \n ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the no you want to search \n ");
	scanf("%d",&j);
	for(i=0;i<n;i++)
	{
		if(arr[i]==j)
		{
			z=j;
			printf("%d",i);
		}
	}
	if(z==j)
	{
		printf("no found !!!! \n ");
	}
	else
	{
		printf("not present \n ");
	}
}
	
}
