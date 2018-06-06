void Solution::reverseWords(string &A) {
    
    
    int start,end;
    int n=A.length();
    start=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==' ')
        {
            end=i-1;
            std::reverse(&A[start],&A[end]);
            while(A[i]==' ')
            {
                i++;
            }
            start=i;
        }
    }
    
    //std::reverse(A.begin(),A.end());
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
