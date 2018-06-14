#include<iostream>
using namespace std;
// Definition for singly-linked list.
 struct ListNode {
      int val;                                  // value of node
      ListNode *next;                           // pointer to next node
      ListNode(int x) : val(x), next(NULL) {} // constructor to initialize A NEW node
  };
 


ListNode* addTwoNumbers(ListNode* A, ListNode* B) {
    if(!A)
        return B;                                   // if any of the list is empty return the other one
    if(!B)
        return A;
        
    int carry = 0, sum = 0;
    sum = A->val + B->val + carry;
    ListNode* newHead = new ListNode(sum%10);       // create a new node with a particular value(sum%10)
    carry = sum/10;     
    A = A->next;                                    // move the pointers ahead
    B = B->next;
    ListNode* newHeadPtr = newHead;                 // make another copy of head which will be returned
    
    while(A || B || carry)
    {
        sum = (A ? A->val : 0) + (B ? B->val : 0) + carry;  // adding using conditions if any of the list is empty
        ListNode* temp = new ListNode(sum%10);      
        carry = sum/10;
        newHead->next = temp;                   // add this node to our resultant list and
        newHead = newHead->next;                // move the pointer ahead
        if(A)
            A = A->next;
        if(B)
            B = B->next;
    }
    
    return newHeadPtr;                          // return the head of resultant list
}

void push(ListNode** head_ref, int new_data)
{
    /* allocate node */
    ListNode* new_node = new ListNode(new_data);
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
// A utility function to print a linked list
void printList(ListNode *node)
{
    while(node != NULL)
    {
        printf("%d ", node->val);
        node = node->next;
    }
    printf("\n");
}

/* Adds contents of two linked lists and return the head node of resultant list */
ListNode* addTwoLists (ListNode* first, ListNode* second)
{
    ListNode* res = NULL; // res is head node of the resultant list
    ListNode *temp, *prev = NULL;
    int carry = 0, sum;
 
    while (first != NULL || second != NULL) //while both lists exist
    {
        // Calculate value of next digit in resultant list.
        // The next digit is sum of following things
        // (i)  Carry
        // (ii) Next digit of first list (if there is a next digit)
        // (ii) Next digit of second list (if there is a next digit)
        sum = carry + (first? first->val: 0) + (second? second->val: 0);
 
        // update carry for next calulation
        carry = (sum >= 10)? 1 : 0;
 
        // update sum if it is greater than 10
        sum = sum % 10;
 
        // Create a new node with sum as data
        temp = new ListNode(sum);
 
        // if this is the first node then set it as head of the resultant list
        if(res == NULL)
            res = temp;
        else // If this is not the first node then connect it to the rest.
            prev->next = temp;
 
        // Set prev for next insertion
        prev  = temp;
 
        // Move first and second pointers to next nodes
        if (first) first = first->next;
        if (second) second = second->next;
    }
 
    if (carry > 0)
      temp->next = new ListNode(carry);
 
    // return head of the resultant list
    return res;
}
int main()
{
    ListNode* res = NULL;
    ListNode* first = NULL;
    ListNode* second = NULL;
 
    // create first list 7->5->9->4->6
    push(&first, 6);
    push(&first, 4);
    push(&first, 9);
    push(&first, 5);
    push(&first, 7);
    printf("First List is ");
    printList(first);
 
    // create second list 8->4
    push(&second, 4);
    push(&second, 8);
    printf("Second List is ");
    printList(second);
 
    // Add the two lists and see result
    res = addTwoLists(first, second);
    printf("Resultant list is ");
    printList(res);
}