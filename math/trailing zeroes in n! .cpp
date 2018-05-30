int Solution::trailingZeroes(int A) {
    
    long int t=5;
    int ans=0;
    while(A/t>0)
    {
        ans+=A/t;
        t=t*5;      // calculating no of multiples of 5 we get trailing zeroes
    }
    
    return ans;
}
