bool Solution::isPower(int A) {
    if(A <= 1)
        return true;
    
    for(int base = 2; base < A; base++)
    {
        int temp = base;
        int exp = 2;
        while(temp <= A &&  exp <= 32)
        {
            temp *= base;
            if(temp == A)
                return true;
            exp++;
        }
    }
    return false;
}

