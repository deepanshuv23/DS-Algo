int Solution::diffPossible(vector<int> &A, int B) {
    
    int n=A.size();
    
    
    for(int i=0;i<n-1;i++)
    {
        if(binary_search(A.begin()+i,A.end(),A[i]+B)==1)
            return 1;
    }
    
    return 0;
}
