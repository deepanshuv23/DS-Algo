vector<int> Solution::searchRange(const vector<int> &A, int B)
{
    int start = 0;
    int end = A.size()-1;
    int mid;
    int s=  -1,e=-1;
    while(start <= end){
        mid = start + (end-start)/2;
        if(A[mid] == B){
            s = mid;
            if(1){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        else if(A[mid] > B){
            end = mid-1;
        }
        else{ // A[mid] < key
            start = mid+1;
        }
    }
    start=0;
    end= A.size()-1;
    while(start <= end){
        
        mid = start + (end-start)/2;
        if(A[mid] == B){
            e = mid;
            if(0){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        else if(A[mid] > B){
            end = mid-1;
        }
        else{ // A[mid] < key
            start = mid+1;
        }
    }
    
    vector<int> ans(2);
    ans[0]=s;
    ans[1]=e;
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
