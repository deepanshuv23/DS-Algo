/*

Given an array of integers, sort the array into a wave like array and return it, 
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....

print lexographically smallest answer
*/


vector<int> Solution::wave(vector<int> &A) {
    
    int n;
    n=A.size();
    vector<int> ans(n);
    sort(A.begin(),A.end());
    int i,j;
    
    for(i=1,j=0;i<n&&j<n;i+=2,j+=2)
    {
        ans[i]=A[j];
    }
    for(i=0,j=1;i<n&&j<n;i+=2,j+=2)
    {
        ans[i]=A[j];
    }
    if(n%2==1)
        ans[n-1]=A[n-1];
    
    return ans;
}
