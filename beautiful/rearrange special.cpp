/*Rearrange an array so that arr[i] becomes arr[arr[i]] with O(1) extra space*/

/*

Let us understand the above steps by an example array {3, 2, 0, 1}
In first step, every value is incremented by (arr[arr[i]] % n)*n
After first step array becomes {7, 2, 12, 9}. 
The important thing is, after the increment operation
of first step, every element holds both old values and new values. 
Old value can be obtained by arr[i]%n and new value can be obtained
by arr[i]/n.

In second step, all elements are updated to new or output values 
by doing arr[i] = arr[i]/n.
After second step, array becomes {1, 0, 3, 2}

*/

void Solution::arrange(vector<int> &arr) {
    
    int n=arr.size();
    for (int i=0; i < n; i++)
        arr[i] += (arr[arr[i]]%n)*n;
 
    // Second Step: Divide all values by n
    for (int i=0; i<n; i++)
        arr[i] /= n;
    
}
