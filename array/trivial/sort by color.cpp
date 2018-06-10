void Solution::sortColors(vector<int> &arr) {
    int n=arr.size();
    
    int z,o,t;
    z=o=t=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            z++;
        else if(arr[i]==1)
            o++;
        else
            t++;
    }
    
    int i=0;
    while(z--)
    {
        arr[i++]=0;
    }
    while(o--)
    {
        arr[i++]=1;
    }
    while(t--)
    {
        arr[i++]=2;
        
    }
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
