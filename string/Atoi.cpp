int Solution::atoi(const string A) {
    
    int n=A.length();
    int i=0;
    while(A[i]==' ')
    {
        i++;
    }
    int f=1;
    if(A[i]=='-')
    {
        f=-1;
        i++;
    }
    else if(A[i]=='+')
    {
        f=1;
        i++;
    }
    int t=i;
    for(;i<n;i++)
    {
        if((A[i]-'0'<0||A[i]-'0'>9))
        {
            n=i;
            break;
        }
    }
    if(i==0)
        return 0;
    
    long int ans=0;
    for(int i=t;i<n;i++)
    {
        int x=A[i]-'0';
        
        ans=ans*10;
        ans+=x;
        
        
        
    }
    if(f==-1)
        ans*=-1;
    if(f==1)
    if(ans>INT_MAX)
        return INT_MAX;
    if(f==-1)
    if(abs(ans)>INT_MAX)
        return INT_MIN;
        
    return ans;
    
    
}
