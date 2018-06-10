int Solution::threeSumClosest(vector<int> &A, int B) {
    
    int n=A.size();
    if(n<3)
        return 0;
    int x,y,z;
    int min=INT32_MAX,sum;
    sort(A.begin(),A.end());
    for(int j=1;j<n-1;j++)
    {
        for(int i=0,k=n-1;i<j&&j<k;)
        {
            int s=A[i]+A[j]+A[k];
            int d=abs(s-B);
            if(d==0)
                return B;
                
            if(d<min)
            {
                min=d;
                sum=s;
            }
            
            if(s>B)
            {
                k--;
            }
            else
            {
                i++;
            }
        }
    }
    
    return sum;
}
