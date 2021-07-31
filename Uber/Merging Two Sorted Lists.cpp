vector<int> solve(vector<int>& a, vector<int>& b) {
    vector<int> result;
    while(!a.empty()&&!b.empty())
    {
        if(a.front()<b.front())
        {
            result.push_back(a.front());
            a.erase(a.begin());
        }
        else
        {
            result.push_back(b.front());
             b.erase(b.begin());
        }
    }
    while(!a.empty())
    {
        result.push_back(a.front());
         a.erase(a.begin());
    }
    while(!b.empty())
    {
        result.push_back(b.front());
         b.erase(b.begin());
    }
    return result;
}
