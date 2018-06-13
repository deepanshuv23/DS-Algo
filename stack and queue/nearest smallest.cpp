vector<int> Solution::prevSmaller(vector<int> &A) {

    int n=A.size();
    int p=0,min=A[0];
    vector<int> ans(n,-1);
    ans[0]=-1;

    for(int i=1;i<n;i++)
    {
        if(A[i]>min)
        {
        for(int j=i-1;j>=p;j--)
        {
            if(A[j]<A[i])
            {
                ans[i]=A[j];
                break;
            }
            
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

/*

1) Create a new empty stack st

2) Iterate over array `A`,
   where `i` goes from `0` to `size(A) - 1`.
    a) We are looking for value just smaller than `A[i]`. So keep popping from `st` till elements in `st.top() >= A[i]` or st becomes empty.
    b) If `st` is non empty, then the top element is our previous element. Else the previous element does not exist. 
    c) push `A[i]` onto st*/
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
