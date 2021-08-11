#include<stdio.h>
void main()
{
	int x,i,j,k,n,arr[100],key,count=0;
	scanf("%d",&n);
	for(x=0;x<n;x++)
	{
		scanf("%d",&k);
		for(i=0;i<k;i++)
		{
			scanf("%d",&arr[i]);
		}
		scanf("%d",&key);
		j=k/2;
		if(key==arr[j]){
			count++;
			printf(" Present %d",count);
		}
		else if(key<arr[j])
		{
			for(i=0;i<j;i++)
			{
				count++;
				if(key==arr[i])
				{
				printf("Present %d",count);	
				}
				
			}
			if(key!=arr[i]){
					printf("not present %d",count);
				}
		}
		else{
			for(i=j;i<k;i++)
			{
				count++;
				if(key==arr[i]){
					printf(" present %d",count);
				}
				
			}
			if(key!=arr[i]){
					printf("not present %d",count);
				}
		}
		count=0;
	}
}
