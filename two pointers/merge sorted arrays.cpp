void Solution::merge(vector<int> &A, vector<int> &B) {
    
    int n=A.size();
    int m=B.size();
    
    vector<int> tmp(n);
    
    A.resize(m+n);
    int i,j,k;
    for(i=0,j=0,k=0;i<n&&j<m;k++)
    {
        if(tmp[i]<B[i])
        {
            A[k]=tmp[i];
            i++;
        }
        else
        {
            A[k]=B[j];
            j++;
        }
    }
    
    while(i<n)
    {
        A[k++]=tmp[i++];
    }
    
    while(j<m)
    {
        A[k++]=B[j++];
    }
    
}
