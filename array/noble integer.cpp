//Given an integer array, find if an integer p exists
// in the array such that the number of integers greater than p in the array equals to p

int Solution::solve(vector<int> &A) {
    
    int n=A.size();
    if(n==0)
        return -1;
    
    sort(A.begin(),A.end());
    for(int i=0;i<n;i++)
    {
        while(A[i]==A[i+1]&&i<n-1)
        {
            i++;
        }
        
        if(A[i]==n-i-1)
            return 1;
    }
    
    return -1;
    
    
