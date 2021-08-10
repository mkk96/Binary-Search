int solve(vector<vector<int>>& reviews, int threshold) {
    vector< vector<int> >::iterator row;
    vector<int>::iterator col;
    int fivestar=0,total=0;
    for (row = reviews.begin(); row != reviews.end(); row++) 
    {
        for (col = row->begin(); col != row->end(); col++) 
        {
            fivestar+=*col;
            total+=*(++col);
        }
    }
    if(threshold<=((float)fivestar/total)*100)
        return 0;
    return ceil((float)(threshold*total-100*fivestar)/(100-threshold));
}
