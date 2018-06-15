int Solution::diffPossible(const vector<int> &A, int B) {
    //vector<int> res;
    auto size = A.size();
    unordered_map<int, int> hash;
    if(size==1)
        return 0;
    for (auto i = 0; i<size; ++i)
    {
        if (hash.find(B + A[i]) != hash.end())
        {
            return 1;
        }
        if (hash.find(A[i]) == hash.end())
            hash[A[i]] = i+1;
    }
    for (auto i = 0; i<size; ++i)
    {
        if (hash.find(B + A[i]) != hash.end())
        {
            if(hash[B+A[i]]!=i+1)
            return 1;
        }
        if (hash.find(A[i]) == hash.end())
            hash[A[i]] = i+1;
    }
    
    return 0;
}


/*Editorial*/

int diffPossible(const vector<int> &num, int diff) {
            if (num.size() < 2 || diff < 0) return false;
            unordered_set<int> S;
            for (int i = 0; i < num.size(); i++) {
                int aj = num[i] - diff;
                int ai = num[i] + diff;
                if (S.find(aj) != S.end()) return true;
                if (S.find(ai) != S.end()) return true;
                S.insert(num[i]);
            }
            return false;
        }