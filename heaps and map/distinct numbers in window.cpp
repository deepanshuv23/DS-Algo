vector<int> Solution::dNums(vector<int> &A, int B) 
{
    
    vector<int> ans;
    
    if(B>A.size())
    {
        return ans;
    }
    
    map<int> M;
    int unique=0;
    for(int i=0;i<B;i++)
    {
        auto it=M.find(A[i]);

        if(it==M.end())
        {
            M[A[i]]=1;
            unique++;
        }
        else
        {
            it->second++;
        }

    }

    ans.push_back(unique);

    for(int i=B;i<A.size();i++)
    {
        auto it=M.find(A[i-B]);            //remove the first lement and insert next element to the window

        if(it->second==1)
        {
            unique--;
            M.erase(it);
        }
        else
        {
            it->second--;
        }


        auto temp=M.find(A[i]);

        if(temp==M.end())
        {
            M[A[i]]=1;
            unique++;
        }
        else
        {
            temp->second++;
        }

        ans.push_back(unique);
    }
    
    return ans;
}
