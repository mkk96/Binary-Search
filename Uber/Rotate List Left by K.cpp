vector<int> solve(vector<int>& nums, int k) {
    // everyone jumps k steps ahead..
    // thats it.

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end() - k);
    reverse(nums.end() - k, nums.end());

    return nums;
}
