vector<vector<int> > Solution::generate(int A) {
    
    int val;
    vector<vector<int>> ans(A);
    
    for(int i=0;i<A;i++)
    {
        val=1;
        for(int k=0;k<=i;k++)
        {
            
            ans[i].push_back(val);
            val=val*(i-k)/(k+1);
            
        }
        
    }
    return ans;
}
