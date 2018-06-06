int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    
    int i,j,mid;
    int low,high;
    int m=A.size();
    int n=A[0].size();
    low=0;
    high=m*n-1;
    mid=low+high;
    mid/=2;
    while(low<=high)
    {
        i=ceil(mid/n);
        j=mid%n;
        if(A[i][j]==B)
            return 1;
        
        if(A[i][j]>B)
            high=mid-1;
        else
            low=mid+1;
            
        mid=low+high;
        mid/=2;
        
    }
    
    return 0;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
