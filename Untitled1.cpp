int solve(string s) {
    int size=s.size();
    int one=count(s.begin(),s.end(),'1');
    int zero=0;
    int temp,result1=0;
    for(int i=0;i<size-1;i++)
    {
        if(s[i]=='0')
        {
            zero++;
        }
        else
        {
            one--;
        }
        temp=one+zero;
        if(temp>result1)
            result1=temp;
    }
    return result1;
}
