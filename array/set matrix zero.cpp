void Solution::setZeroes(vector<vector<int> > &A) {
    
    int m,n;
    m=A.size();
    n=A[0].size();
    
    bool r=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(A[0][i]==0)
        {
            
            r=1;
            break;
        }
        
    }
    
    for(int i=0;i<m;i++)
    {
        if(A[i][0]==0)
        {
            
            c=1;
            break;
        }
        
    }

    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(A[i][j]==0)
            {
                A[i][0]=1;
                A[0][j]=1;
            }
        }
    }
    for (int i = 1; i < m; i++) 
    {
        for (int j = 1; j < n; j++) 
        {
            if (A[0][j] == 1 ||A[i][0] == 1) 
            {
                A[i][j] = 0;
            }
        }
    }

     if (r == true) 
     {
        for (int i = 0; i < C; i++) {
            A[0][i] = 1;
        }
    }
 
    // modify first col if there was any 1
    if (c== true) {
        for (int i = 0; i < R; i++) {
            A[i][0] = 1;
        }
    }


        
    
}
