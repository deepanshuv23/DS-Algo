int Solution::searchInsert(vector<int> &A, int B) {
    
    int n=A.size();
    int low,mid,high;
    low=0;
    high=n-1;
    mid=(low+high)/2;
    if(A[0]>B)
        return 0;
    
    if(A[n-1]<B)
        return n;
    while(low<=high)
    {
        if(A[mid]==B)
            return mid;
            
        if(A[mid]<B)
        {
            if(B<A[mid+1]&&mid<n-1)
                return mid+1;
            else
                low=mid+1;
        }
        else
        {
          
            if(A[mid-1]<B&&mid>0)
                return mid;
            else
                high=mid-1;  
        }
    }
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
