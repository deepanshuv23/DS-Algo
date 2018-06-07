string Solution::longestPalindrome(string A) {

    int n=A.length();
    string ans="";
    int table[n][n];
    memset(table,0,sizeof(table));
    for(int i=0;i<n;i++)
    {
        table[i][i]==1;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]==A[j])
            {
                if(i==j-1)
                {
                    table[i][j]=1;
                }

            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]==A[j])
            {
                if(i==j-1)
                {
                    table[i][j]=1;
                }
                else if(table[i+1][j-1]==1)
                {
                    table[i][j]=1;
                }

            }
        }
    }

    int start=0,max=1;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(table[i][j]==1)
            {
                if(j-i+1>max)
                {
                    max=j-i+1;
                    start=i;
                }
            }
        }
    }
    //cout<<max<<" "<<start;
    while(max--)
    {
        ans+=A[start];
        start++;
    }

    return ans;
}



// alternate
 string Solution::longestPalindrome(string A) {
 // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int start = 0;
    int length = A.size();
    int maxLen = 1;
    
    int low = 0, high;
    
    for(int i = 0; i < length; i++){
        low = i-1;
        high = i;
        while((low >= 0) && (high < length) && (A[low] == A[high])){
            if((high - low + 1) > maxLen){
                maxLen = high-low+1;
                start = low;
            }        
            low--;
            high++;
        }
        
        low = i-1;
        high = i+1;
        while((low >= 0) && (high < length) && A[low] == A[high]){
            if((high - low + 1) > maxLen){
                maxLen = high-low+1;
                start = low;
            }
            low--;
            high++;
        }
    }
    
    string sol = "";
    
    high = start+maxLen;
    while(start != high){
        sol = sol + A[start];
        start++;
    }
    
    return sol;
 }
 
