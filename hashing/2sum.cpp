vector<int> Solution::twoSum(const vector<int> &A, int B) {
    vector<int> res;
    auto size = A.size();
    unordered_map<int, int> hash;
    
    for (auto i = 0; i<size; ++i)
    {
        if (hash.find(B - A[i]) != hash.end())
        {
            res.emplace_back(hash[B - A[i]]);
            res.emplace_back(i+1);
            return res;
        }
        if (hash.find(A[i]) == hash.end())
            hash[A[i]] = i+1;
    }
    
    return res;
}