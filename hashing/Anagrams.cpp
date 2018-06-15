vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<vector<int> > res;
    vector<string> row;
    unordered_map<string, vector<int> > anagram;
    auto size = A.size();
    
    for (auto i = 0; i<size; ++i)
    {
        string temp;
        temp.append(A[i]);
        sort(temp.begin(), temp.end());
        row.emplace_back(temp);
    }
    
    for (auto j = 0; j<size; ++j)
        anagram[row[j]].emplace_back(j+1);              // if the string already included then just push the index 
    
    for (auto it = anagram.begin(); it != anagram.end(); ++it)
        res.emplace_back(it->second);
    
    return res;
}