int Solution::numDistinct(string S, string T) {
    
    /*
    given two strings S,T find the no of occurences of T in S
    */

    int rows = T.size(), cols = S.size();

    if(rows > cols){
        return 0;
    }
    
    vector<vector<int> > temp(rows+1, vector<int>(cols+1, 0));
    
    for(int i = 0; i <= cols; i++){
        temp[0][i] = 1;
    }
    
    for(int i = 1; i <= rows; i++){
        for(int j = i; j <= cols; j++){
            if(S[j-1] == T[i-1]){
                temp[i][j] = temp[i-1][j-1] + temp[i][j-1];
            }
            else{
                temp[i][j] = temp[i][j-1];
            }
        }
    }
    
    return temp[rows][cols];
}
