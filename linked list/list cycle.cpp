ListNode* Solution::detectCycle(ListNode* A) {
 

 // its floyds cycle detection algorithm
    if(A == NULL || A->next == NULL){
        return NULL;
    }
    
    ListNode* slow = A;
    ListNode* fast = A;
    
    while(slow != NULL && fast != NULL){
        slow = slow->next;
        if(fast->next == NULL){
            return NULL;
        }
        else{
            fast = (fast->next)->next;
        }
        if(slow == fast){
            break;
        }
    }
    
    if(slow == NULL || fast == NULL){
        return NULL;
    }
    
    ListNode* curr = A;
    while(curr != slow){
        curr = curr->next;
        slow = slow->next;
    }
    
    return curr;
       
}
