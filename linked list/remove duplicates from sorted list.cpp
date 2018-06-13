/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {

    ListNode *tmp=A;
    while(A!=NULL)
    {
        while(A==A->next)
        {
            A=A->next;
        }
        tmp->next=A;
        tmp=tmp->next;
    }

    return tmp;
    
    
}
