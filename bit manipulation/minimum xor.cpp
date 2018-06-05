int Solution::findMinXor(vector<int> &A) {
    int min=INT32_MAX;
    int n=A.size();
    sort(A.begin(),A.end());
    for(int i=0;i<n-1;i++)
    {
        int temp;
        temp=A[i]^A[i+1];
        if(temp<min)
            min=temp;
        
    }
    
    return min;
    
}
