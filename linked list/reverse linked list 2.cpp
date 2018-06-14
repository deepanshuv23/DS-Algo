ListNode* Solution::reverseBetween(ListNode* A, int m, int n) {
    if (!A)
        return NULL;
    if(m==n)
        return A;
    ListNode *temp, *current, *prev, *next, *start, *end;
    int i = 1;
    temp = A;
    bool flag = false;
    if(m==1)
        flag = true;
    while(i<m)
    {
        start = temp; //(m-1)th node
        temp = temp->next;
        ++i;
    }
    current = next = temp;
    
    while(i<n)
    {
        temp = temp->next;
        ++i;
    }
    end = temp; //nth node
    prev = temp->next;
    ListNode *endplus = end->next;
    while(current != endplus)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    if(flag)
        A = prev;
    else
        start->next = prev;
    return A;
}