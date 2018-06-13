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
    if(A->next==NULL)
    {
        //A->next=NULL;
        return A;
    }
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


/* other solution*/


/*
Given a list, rotate the list to the right by k places, where k is non-negative.
For example:
Given 1->2->3->4->5->NULL and k = 2,
return 4->5->1->2->3->NULL.
https://www.interviewbit.com/problems/rotate-list/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int length(ListNode* head)
{
    int len = 0;
    while(head)
    {
        head = head->next;
        ++len;
    }
    return len;
}
ListNode* Solution::rotateRight(ListNode* A, int B) {
    if (!A || !A->next)
        return A;
        
    auto l = length(A);
    int last = 0;
    
    if(B%l==0)
        return A;
    else if(l>B)
        last = l-B;
    else
        last = l - B%l;
    
    ListNode* headptr = A;
    while(last-1)
    {
        A = A->next;
        --last;
    }
    
    ListNode* tempNext, *newHead;
    tempNext = newHead = A->next;
    A->next = NULL;
    
    while(tempNext->next)
        tempNext = tempNext->next;
    
    tempNext->next = headptr;
    A = newHead;
    return A;
}