long int maxC(long int x,long int y)
{
    if(x>y)
        return x;
        
    return y;
}

int Solution::maxArr(vector<int> &A) {
    long int max=0;
    int n=A.size();
    long int max1=0,max2=0,min1=INT32_MAX,min2=INT32_MAX;
    for(int i=0;i<n;i++)
    {
        long int t1,t2;
        t1=A[i]-i;
        t2=A[i]+i;
        if(t1>max1)
            max1=t1;
        
        if(t1<min1)
            min1=t1;
        
        if(t2>max2)
            max2=t2;
        
        if(t2<min2)
            min2=t2;
    }

    max=maxC(max1-min1,max2-min2);
    
    return max;
}
