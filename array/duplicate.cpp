/*Array - {6,2,5,1,4,5,7,3}
 
0 1 2 3 4 5 6 7
6 7 1 5 5 4 2 3
 
0->6->2->1->7->3->5->4->5
 
Here 5->4->5 is a loop.
First element(5) in the loop is our repeating number.
 
 
Array - {1,2,3,4,5,6,4}
 
0 1 2 3 4 5 6  - Indices of array
1 2 3 4 5 6 4  - Elements of array
 
If we draw the links
0->1->2->3->4->5->6->4
 
Here 4->5->6->4 is a loop.

*/

int Solution::repeatedNumber(const vector<int> &A) {
    int slow = A[0];
    int fast = A[A[0]];
    
    while(slow!=fast)
    {
        slow = A[slow];
        fast = A[A[fast]];
    }
    
    slow = 0;
    while(slow!=fast)
    {
        slow = A[slow];
        fast = A[fast];
    }
    
    return slow;
}

int Solution::repeatedNumber(const vector<int> &A) {
 int i,xor1=0,xor2=1;
    for(i=1;i<A.size();i++)
    {
        xor1^=A[i];
        xor1^=i;
    }
    xor1^=A[0];
    /*int n=A.size();
    for(i=2;i<=(n-1);i++)
    {
        xor2^=i;
    }
    
    int repeat;
    repeat=xor1^xor2;*/
    
    return xor1;

}


