string Solution::addBinary(string A, string B) {
    
    int n=A.length();
    int m=B.length();
    int i,j;
    string ans="";
    int t;
    int c=0;
    int x,y;
    for(i=n-1,j=m-1;i>=0&&j>=0;i--,j--)
    {
        x=A[i]-'0';
        y=B[j]-'0';
        t=(x+y+c);
        if(t>=2)
            c=1;
        else
            c=0;
        
        t%=2;
        
        ans += char(t+'0');
        
    }
    
    while(j>=0)
    {
        
        y=B[j]-'0';
        t=(y+c);
        if(t>=2)
            c=1;
        else
            c=0;
        
        t%=2;
        j--;
        ans += char(t+'0');
    }
    
    while(i>=0)
    {
        
        x=A[i]-'0';
        t=(x+c);
        if(t>=2)
            c=1;
        else
            c=0;
        
        t%=2;
        i--;
        ans += char(t+'0');
    }
    if(c==1)
        ans+='1';
    int s=ans.length();
    std::reverse(&ans[0],&ans[s-1]+1);
    
    return ans;
    
}
