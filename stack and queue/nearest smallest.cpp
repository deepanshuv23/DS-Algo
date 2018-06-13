vector<int> Solution::prevSmaller(vector<int> &A) {

    int n=A.size();
    int p=0,min=A[0];
    vector<int> ans(n,-1);
    ans[0]=-1;

    for(int i=1;i<n;i++)
    {
        if(A[i]>min)
        {
        for(int j=p;j<i;j++)
        {
            if(A[j]<A[i])
                ans[i]=A[j];
        }
        }
        else
        {
            min=A[i];
            p=i;
        }
    }

    return ans;
}

// another method mentioned in editorial using stack

vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> ans;
    ans.resize(A.size());

    stack<int> st;
    
    for (int i = 0; i < A.size(); i++) {
        while (!st.empty() && st.top() >= A[i]) st.pop();
        if (st.empty()) {
            ans[i] = -1;
        } else {
            ans[i] = st.top();
        }
        st.push(A[i]);
    }
    return ans;
}
