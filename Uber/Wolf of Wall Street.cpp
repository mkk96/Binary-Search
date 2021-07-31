int solve(vector<int>& prices) {
    vector<int> ::iterator itr;
    int difference=0,low=INT_MAX,high=INT_MIN;
    for(itr=prices.begin();itr!=prices.end();itr++)
    {
        low=min(low,*itr);
        difference=max(difference,*itr-low);
    }
    return difference;
}
