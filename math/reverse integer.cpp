int Solution::reverse(int A) {
    
    long long int ans;
    string s;
    int sign=1;
    
    if(A<0)
        sign=-1;
        
    A=abs(A);
    
    
    s=to_string(A);
    std::reverse(s.begin(),s.end());
    
    ans=stoll(s);
    
    ans*=sign;
    
    if(ans>INT_MAX||ans<INT_MIN)
        return 0;
    
    return ans;
}


