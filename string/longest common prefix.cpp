string Solution::longestCommonPrefix(vector<string> &A) {
    
    string ans="";
    sort(A.begin(),A.end());
    int n=A.size();
    int p=A[0].length();
    for(int i=0;i<p;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(A[0][i]!=A[j][i])
                return ans;
        }
        ans += A[0][i];
    }
    
    return ans;
}
