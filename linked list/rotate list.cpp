int length(ListNode* head)
{
    int len = 0;
    while (head)
    {
        head = head->next;
        ++len;
    }
    return len;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {

    //int l=length(A);

    int len = 0;
    
    ListNode *head=A;
    ListNode *tmp=A;
    while (1)
    {
        head = head->next;
        len++;
        if(head->next==NULL)
        {
            head->next=A;
            break;
        }
    }
    
    B=B%len;
    if(B==0)
        return A;

    int t=len-B;
    
    while(t--)
    {
        tmp=tmp->next;
        if(t==0)
            A=tmp->next;
    }
    tmp->next=NULL;

    return A;

    

    
}
