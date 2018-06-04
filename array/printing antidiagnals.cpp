vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    
    int n=A.size();
    int m=A[0].size();
    int q,r,k;
    vector< vector<int> > ans(n+m-1);
    
    for(q=0,r=0,k=0;q<m;q++)
    {
        int i,j;
        i=r;
        j=q;
        do{
            ans[k].push_back(A[i][j]);
            i++;
            j--;
            
        }while(i!=q&&j!=r);
        
        k++;
    }
    for(r=1,q=m-1;r<n;r++)
    {
        int i,j;
        i=r;
        j=q;
        do{
            ans[k].push_back(A[i][j]);
            i++;
            j--;
            
        }while(i!=q&&j!=r);
        
        k++;
    }
    
    return ans;
}
