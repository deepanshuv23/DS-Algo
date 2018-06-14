ListNode* Solution::partition(ListNode* A, int B) {
    if(!A || !A->next)
        return A;
    ListNode* first, *second, *f, *s;
    first = second = f = s = NULL;
    while (A)
    {
        if(A->val < B)
        {
            if(!first)
                f = first = A;           
            else
            {
                first->next = A;
                first = first->next;
            }
        }
        else
        {
            if(!second)
                s = second = A;
            else
            {
                second->next = A;
                second = second->next;
            }
        }
        A = A->next;
    }
    if(s)
        second->next = NULL;
        
    if(f)
    {
        first->next = s;
        return f;
    }
    return s;
}