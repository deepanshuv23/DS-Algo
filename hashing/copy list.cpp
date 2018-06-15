/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* A) {

    if(!A)
        return NULL;

    RandomListNode *head=A;

    while(A)
    {
        RandomListNode *copyA= new RandomListNode(A->label);
        copyA->next=A->next;
        A->next=copyA;
        A=copyA->next;
    }

     A = head;
    
    while (A)
    {
        if (!A->random)             // I missed this check.
            A->next->random = NULL;
        else
            A->next->random = A->random->next;
            
        A = A->next->next;
    }
    A = head;

    
    RandomListNode* copy = A->next;
    RandomListNode* copyHead = A->next;
    
    while (A)
    {
        A->next = A->next->next;
        A = A->next;
        if (!copy->next)            // I missed this check.
            break;
        copy->next = copy->next->next;
        copy = copy->next;
    }
    
    return copyHead;
}
}
