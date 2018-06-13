/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    
    ListNode *ans=NULL;

    if(!A)
    {
        return B;
    }
    if(!B)
    {
        return A;
    }

    if(A->val<B->val)
    {
        ans=A;
        A=A->next;
    }
    else
    {
        ans=B;
        B=B->next;
    }
    ListNode *p=ans;
    while(A!=NULL&&B!=NULL)
    {
        if(A->val<B->val)
        {
            ans->next=A;
            A=A->next;
        }
        else
        {
            ans->next=B;
            B=B->next;
        }
        ans=ans->next;
    }


    if(A)
    {
        ans->next=A;
        A=A->next; 
        ans=ans->next;
    }
    else if(B)
    {
        ans->next=B;
        B=B->next;
        ans=ans->next;
    }

    return p;
    
}
