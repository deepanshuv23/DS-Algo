int Solution::lPalin(ListNode* A) {
    if (!A || !A->next)
        return 1;
    stack<int> s;
    ListNode* slow = A, *fast = A;
    while (fast && fast->next)
    {
        s.push(slow->val);
        slow = slow->next;
        fast = fast->next->next;
    }
    
    if (fast)
        slow = slow->next;
    
    while (s.size() && slow)
    {
        if (s.top() != slow->val)
            return 0;
        s.pop();
        slow = slow->next;
    }
    return 1;
}