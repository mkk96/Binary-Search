vector<int> solve(int n) {
    vector<int> value;
    int c=1;
    value.push_back(c);
    for(int i=1;i<=n;i++)
    {
        c=c*(n-i+1)/i;
        value.push_back(c);
    }
    return value;
}
