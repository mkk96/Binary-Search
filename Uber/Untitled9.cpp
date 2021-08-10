  #include<iostream>
   #include<cstdio>
   #include<vector>
   #include<math.h>
   using namespace std;
vector<int> v;
vector<vector<int> > result;
int subset(int arr[],int k,int n,int idx)
{
	if(idx==n)
 		return 0;

	if(k==1)
	{
	    for(int i=idx;i<n;i++)
	    {
	        v.push_back(arr[i]);
	        result.push_back(v);
	        v.pop_back();
	    }
	}

 	for(int j=idx;j<n;j++) 
	{
	  v.push_back(arr[j]);
	  subset(arr,k-1,n,j+1);
	  v.pop_back();
  	}
  	return 0;
}

int main()
{
int arr[] = {1,4,5,7};
int k = 2;
int n =sizeof(arr)/sizeof(arr[0]);
subset(arr,k,n,0);
int sum=1;
int res=0;
int odd=0;
for(int i = 0;i<result.size();i++)
{ 
	sum=1;
	odd=0;
  	for(int j = 0;j<result[i].size();j++)
   	{
     	sum=(sum*result[i][j])%(int)(pow(10,9)+7);
     	if(result[i][j]%2==1)
     		odd++;
   	}
   	if(odd%2==0)
   		res=(res+sum)%(int)(pow(10,9)+7);
}
    cout << res%(int)(pow(10,9)+7);
}
