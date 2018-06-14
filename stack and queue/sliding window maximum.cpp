vector<int> Solution::slidingMaximum(const vector<int> &arr, int k) {
    
    int n=arr.size();
    std::deque<int>  Qi(k);
 
    /* Process first k (or first window) elements of array */
    int i;
    for (i = 0; i < k; ++i)
    {
        // For very element, the previous smaller elements are useless so
        // remove them from Qi
        while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();  // Remove from rear
 
        // Add new element at rear of queue
        Qi.push_back(i);
    }
    vector<int> B(n-k+1);
    int j=0;
    // Process rest of the elements, i.e., from arr[k] to arr[n-1]
    for ( ; i < n; ++i)
    {
        // The element at the front of the queue is the largest element of
        // previous window, so print it
        B[j++]= arr[Qi.front()] ;
 
        // Remove the elements which are out of this window
        while ( (!Qi.empty()) && Qi.front() <= i - k)
            Qi.pop_front();  // Remove from front of queue
 
        // Remove all elements smaller than the currently
        // being added element (remove useless elements)
        while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();
 
         // Add current element at the rear of Qi
        Qi.push_back(i);
    }
 
    // Print the maximum element of last window
    B[j]= arr[Qi.front()];
    
    return B;

}
