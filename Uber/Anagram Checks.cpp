bool solve(string s0, string s1) {
    if(s0.size()!=s1.size())
        return false;
    vector<int> hash(256,0);
    for(int i=0;i<s0.size();i++)
    {
        hash[s0[i]]++;
        hash[s1[i]]--;
    }
    for(int i=0;i<256;i++)
    {
        if(hash[i]!=0)
            return false;
    }
    return true;
}
