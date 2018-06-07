int Solution::strStr(const string A, const string B) {
    int n=A.length();
    int m=B.length();
    
    if(n==0||m==0)
        return -1;
        
    int index;
    
    int i,j,k;
    for(i=0;i<n-m;i++)
    {
        if(A[i]==B[0])
        {
            int flag=0;
            for(j=0,k=i;j<m&&k<n;j++,k++)
            {
                if(A[k]!=B[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0&&j==m)
                return i;
        }
    }
    
    return -1;
}
