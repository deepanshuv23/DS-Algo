vector<int> Solution::solve(vector<int> &A, vector<int> &B) 
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
 
    int N = A.size();
 
    // Max heap which contains tuple of the format
    // (sum, (i, j)) i and j are the indices 
    // of the elements from array A
    // and array B which make up the sum.
    priority_queue<pair<int, pair<int, int> > > pq;
 
    // my_set is used to store the indices of 
    // the  pair(i, j) we use my_set to make sure
    // the indices doe not repeat inside max heap.
    set<pair<int, int> > my_set;
 
    // initialize the heap with the maximum sum
    // combination ie (A[N - 1] + B[N - 1])
    // and also push indices (N - 1, N - 1) along 
    // with sum.
    pq.push(make_pair(A[N - 1] + B[N - 1],
                      make_pair(N-1, N-1)));
 
    my_set.insert(make_pair(N - 1, N - 1));
    vector<int> ans;
    // iterate upto K
    for (int count=0; count<N; count++) {
 
        // tuple format (sum, i, j).
        pair<int, pair<int, int> > temp = pq.top();
        ans.push_back(temp.first);
        pq.pop();
 
       // cout << temp.first << endl;
 
        int i = temp.second.first;
        int j = temp.second.second;
 
        int sum = A[i - 1] + B[j];
 
        // insert (A[i - 1] + B[j], (i - 1, j)) 
        // into max heap.
        pair<int, int> temp1 = make_pair(i - 1, j);
 
        // insert only if the pair (i - 1, j) is 
        // not already present inside the map i.e.
        // no repeating pair should be present inside 
        // the heap.
        if (my_set.find(temp1) == my_set.end()) {
            pq.push(make_pair(sum, temp1));
            my_set.insert(temp1);
        }
 
        // insert (A[i] + B[j - 1], (i, j - 1)) 
        // into max heap.
        sum = A[i] + B[j - 1];
        temp1 = make_pair(i, j - 1);
 
        // insert only if the pair (i, j - 1)
        // is not present inside the heap.
        if (my_set.find(temp1) == my_set.end()) {
            pq.push(make_pair(sum, temp1));
            my_set.insert(temp1);
        }
    }
    return ans;
}



void check()
{
    priority_queue<pair<int, pair<int, int> > > hp;
	set<pair<int, int> > S;
	int n = A.size();
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	hp.push(make_pair(A[n-1]+B[n-1], make_pair(n-1, n-1)));
	S.insert(make_pair(n-1, n-1));

	vector<int> ans;
	int k=n;
	while(k--){
		pair<int, pair<int, int> > top = hp.top();
		hp.pop();
		ans.push_back(top.first);
		int L = top.second.first;
		int R = top.second.second;
		
		if( R>0 && L>=0  && S.find(make_pair(L,R-1)) == S.end() ){
			hp.push(make_pair(A[L]+B[R-1], make_pair(L,R-1)));
			S.insert(make_pair(L,R-1));
		}
		if( R>=0  && L>0 && S.find(make_pair(L-1, R))==S.end()){
			hp.push(make_pair(A[L-1]+B[R], make_pair(L-1,R)));
			S.insert(make_pair(L-1, R));
		}
	}
	return ans;
}

