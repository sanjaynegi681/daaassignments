#include<stdio.h>
void main()
{
	int i,j,k,arr[100],x,n,s,count=0;
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		scanf("%d",&s);
		for(i=1;i<=s;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=1;i<=s;i++)
		{
			for(j=2;j<=s;j++)
			{
				for(k=3;k<=s;k++)
				{
					if(arr[i]+arr[j]==arr[k])
					{
						printf("%d %d %d ",i,j,k);
						count++;
						break;
					}
				}
			}
		}
		if(count==0)
		{
			printf("no not found");
		}
	}
