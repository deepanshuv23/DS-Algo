int compare(string x,string y)
{
    string xy=x+y;
    string yx=y+x;
    
    return xy>yx?1:0;
}
string Solution::largestNumber(const vector<int> &a) {
    
    int n=a.size();
    vector<string> b(n);
    int f=0;
    
    for(int i=0;i<n;i++)
    {
        b[i]=std::to_string(a[i]);
        if(a[i]>0)
            f=1;
    }
    string s="0";
    
    if(f==0)
        return s;
    
    sort(b.begin(),b.end(),compare);
    
    string ans;
    
    for(int i=0;i<n;i++)
    {
        ans += b[i];
    }
    
    return ans;
    
}
