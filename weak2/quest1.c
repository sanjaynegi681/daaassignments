#include<stdio.h>
void main()
{
	int i,j,k,n,arr[100],key,count=0;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&k);
		for(i=0;i<k;i++)
		{
			scanf("%d",&arr[i]);
		}
		scanf("%d",&key);
		for(i=0;i<k;i++)
		{
			if(key==arr[i])
			{
				count++;
			}
		}
		if(count>=1)
		{
			printf("%d-%d",key,count);
		}
		else{
			printf("Element not found ");
		}
		count=0;
	}
}
