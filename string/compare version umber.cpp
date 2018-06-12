int Solution::compareVersion(string A, string B) {
    
    int n=A.length();
    int m=B.length();
    
    if(A==B)
        return 0;
    
    vector<long long int> a;
    vector<long long int> b;
    string tmp="";
    int i,j;
    i=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]=='.')
        {
            a.push_back(stoll(tmp));
            tmp.clear();
        }
        else
        {
            tmp+=A[i];
        }
        
    }
    tmp.clear();
    for(int i=0;i<m;i++)
    {
        if(B[i]=='.')
        {
            b.push_back(stoll(tmp));
            tmp.clear();
        }
        else
        {
            tmp+=B[i];
        }
        
    }
    
    
    n=a.size();
    m=b.size();
    
    //int i,j;
    i=j=0;
    while(i<n&&j<m)
    {
        if(a[i]>b[j])
            return 1;
        
        if(a[i]<b[j])
            return -1;
            
        i++;
        j++;
    }
    
    if(n<m)
        return -1;
        
    if(n==m)
        return 0;
    
    
    return 1;
    
    
}
