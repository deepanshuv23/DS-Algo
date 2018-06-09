int Solution::removeDuplicates(vector<int> &arr) {
     int n=arr.size();
    if (n==0 || n==1||n==2)
        return n;
 
    // To store index of next unique element
    int j = 0;
 
    // Doing same as done in Method 1
    // Just maintaining another updated index i.e. j
    for (int i=0; i < n-2; i++)
    {
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];
            
        if(arr[i]==arr[i+1]&&arr[i+1]!=arr[i+2])
            arr[j++]=arr[i];
    }
    
        arr[j++]=arr[n-2];
        arr[j++] = arr[n-1];
        
    arr.resize(j);
    return j;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
