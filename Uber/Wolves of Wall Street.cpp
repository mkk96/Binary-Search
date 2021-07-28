#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int array[n],i;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	i=0;
	while(i<n-1)
	{
		while(i<n-1&&array[i+1]<=array[i])
			i++;
		int buy=i++;
		if(i==n-1)
		{
			break;
		}
		while(i<n&&array[i]>=array[i-1])
			i++;
		int sell=i-1;
		sum+=array[sell]-array[buy];
	}
	cout<<sum<<endl;
}
