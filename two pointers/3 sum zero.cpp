vector<vector<int> > Solution::threeSum(vector<int> &A) {
    
    int n=A.size();
    vector<vector<int> > ans;
    
    sort(A.begin(),A.end());
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1,k=n-1;j<k;)
        {
            int s=A[i]+A[j]+A[k];
            //int d=abs(s-B);
            if(s==0)
            {
                vector<int> temp;
                temp.push_back(A[i]);
                temp.push_back(A[j]);
                temp.push_back(A[k]);
                ans.push_back(temp);
                temp.erase(temp.begin(),temp.end());
                while(A[j] == A[j+1]){
                    j++;
                    if(j == A.size()){
                        break;
                    }
                }
                j++;   
                
            }
                
            
            else if(s>0)
            {
                while(A[k] == A[k-1]){
                    k--;
                    if(k == 0){
                        break;
                    }
                }
                k--;
            }
            else
            {
                while(A[j] == A[j+1]){
                    j++;
                    if(j == A.size()){
                        break;
                    }
                }
                j++;
            }
        }
         while(A[i+1] == A[i]){
            i++;
            if(i == A.size()-1){
                return ans;
            }
        }
        
    }
    
    return ans;
}
