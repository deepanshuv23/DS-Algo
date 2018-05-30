void Solution::rotate(vector<vector<int> > &A) {

    int N=A[0].size();
    
    for(int x=0;x<N/2;x++)// to traverse all squares
    {
        for(int y=x;y<N-x-1;y++)
        {
         
            // store current cell in temp variable
            int temp = A[x][y];
 
            // move values from right to top
            A[x][y] = A[N-1-y][x];
 
            // move values from bottom to right
            A[N-1-y][x] = A[N-1-x][N-1-y];
 
            // move values from left to bottom
            A[N-1-x][N-1-y] = A[y][N-1-x];
 
            // assign temp to left
             A[y][N-1-x]= temp;
        
        }
    }
    
}
