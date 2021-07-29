#include<bits\stdc++.h>
using namespace std;
vector<int> solve(vector<int>& nums) {
    int pre = 1;
    for (int i = nums.size() - 1; i > -1; i--) {
        nums[i] += pre;
        pre = (nums[i] > 9) ? 1 : 0;
        nums[i] %= 10;
    }
    if (pre) nums.insert(nums.begin(), 1);
    return nums;
}
int main()
{
	int n;
	cin>>n;
	int array[n],i;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	vector<int> nums(array,array+n);
	vector<int> result=solve(nums);
	for(i=0;i<result.size();i++)
	{
		cout<<result.front()<<" ";
		result.pop_back();
	}
	return 0;
}
