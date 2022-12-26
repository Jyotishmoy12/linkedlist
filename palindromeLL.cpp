class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node* head) {
    if(head==NULL||head->next==NULL) return true;
        
    Node* slow = head;
    Node* fast = head;
        
    while(fast->next!=NULL&&fast->next->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
        
    slow->next = reverse(slow->next);
    slow = slow->next;
    Node* dummy = head;
        
    while(slow!=NULL) {
        if(dummy->data != slow->data) return false;
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;
}
   Node* reverse(Node* ptr) {
    Node* pre=NULL;
    Node* next=NULL;
    while(ptr!=NULL) {
        next = ptr->next;
        ptr->next = pre;
        pre=ptr;
        ptr=next;
    }
    return pre;
}
};

TC- 0(N/2)+0(N/2)+0(N/2)
SC-0(1)
