
int min(int x,int y)
{
    return x>y?x:y;
}
int Solution::solve(string A) {
    
    int n=A.length();
    int table[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            table[i][j]=0;
            
        }
    }
    
    for(int gap=1;gap<n;gap++)
    {
        for(int l=0,h=gap;h<n;l++,h++)
        {
            if(A[l]==A[h])
            {
                table[l][h]=table[l+1][h-1];
            }
            else
            {
                table[l][h]=min(table[l][h-1],table[l+1][h])+1;
            }
        }
    }

    return table[0][n-1];
}
