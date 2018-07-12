/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
  

    map<int,int> M;

    for(int i=0;i<A.size();i++)
    {
        ListNode* curr= A[i];

        while(curr!=NULL)
        {
            int tmp=curr->val;
            if(M.find(tmp)!=M.end())
            {
                M[tmp]++;
            }
            else
            {
                M[tmp]=1;
            }

            curr=curr->next;
        }
    }


    auto it=M.begin();

    ListNode *head=NULL;
    ListNode *curr=NULL;

    while(it!=M.end())
    {
        while(it->second>0)
        {
            ListNode *list= new ListNode(it->first);

            if(head==NULL)
            {
                head=list;
                curr=list;
            }
            else
            {
                curr->next=list;
                curr=curr->next;
            }
            it->second--;
        }
        it++;
    }

    return head;
}
