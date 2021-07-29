int solve(vector<int>& nums) {
    if (nums.size() == 0) return -1;
    int l = 0;
    int r = nums.size() - 1;
    int mid;
    while (l < r) {
        mid = (l + r) / 2;
        if (nums[mid] >= mid) {
            r = mid;
        } else
            l = mid + 1;
    }
    if (nums[l] == l) return l;
    return -1;
}
