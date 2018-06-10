#define mod 1000000007
int Solution::cntBits(vector<int> &A) {
    
    int n=A.size();
    long long int ans=0;
    
    for(int i=0;i<31;i++)
    {
        long int count = 0;
        count=0;
        for(int j=0;j<n;j++)
        {
            if(A[j]&(1<<i))
                count++;
        }
        
        ans+=count*(n-count)*2;
        ans=ans%mod;
    }
    
    return int(ans);
}
