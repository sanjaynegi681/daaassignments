#include <iostream>
using namespace std;
int main()
{
	int i,j,k,n,arr[200],temp,x,count;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>k;
		for(i=0;i<k;i++)
		{
			cin>>arr[i];
		}
		// swap 
		for(i=0;i<k;i++)
		{
			for(j=0;j<k;j++)
			{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			}
		}
		cin>>x;
		//diff
		count=0;
		for(i=0;i<k;i++)
		{
			for(j=0;j<k;j++)
			{
				if(arr[i]-arr[j]==x)
				{
				count++;	
				}
		}
		}
		cout<<count;
	}
	return 0;
}
