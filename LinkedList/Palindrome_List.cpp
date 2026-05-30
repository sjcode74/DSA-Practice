class Solution {
public:
ListNode* reverse(ListNode* &head){
    ListNode* prev = NULL;
    ListNode* curr = head;
    
    while(curr != NULL){
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
      ListNode* temp = head;
      int count = 0;
      while(temp != NULL){
        count++;
        temp = temp->next;
      }  
      temp = head;
      int mid = count / 2;
      while(mid--){
        temp = temp->next;
      }
      ListNode* second = reverse(temp);
      ListNode* first = head;
      while(second != NULL){
        if(first->val != second->val){
            return false;
        }
        first = first->next;
        second = second->next;
      }
     return true;
    }
};
