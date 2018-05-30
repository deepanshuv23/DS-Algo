int coverPoints(vector<int> &A, vector<int> &B) {
    
    int n=A.size();
    int ans;
    
    ans=0;
    int x,x1,x2,y,y1,y2,temp;
    for(int i=0;i<n-1;i++)
    {
        x1=A[i];
        x2=A[i+1];
        y1=B[i];
        y2=B[i+1];
        
        x=abs(x1-x2);
        y=abs(y1-y2);
        
        ans+=max(x,y); // just take the absolute maximum difference in distance to get minimum steps
                       // eg (1,2) to (-3,4) ans = max(1+3,4-2) which is 4
        
    }
    
    return ans;
    
}
