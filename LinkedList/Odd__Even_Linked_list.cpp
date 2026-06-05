class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
      if(head == NULL || head->next == NULL || head->next->next == NULL){
        return head;
      }  
      ListNode* evenstart = head->next;
      ListNode* odd = head;
      ListNode* even = head->next;
      while(odd->next && even->next){
        odd->next = even->next;
        even->next = odd->next->next;
        odd = odd->next;
        even = even->next;
      }
      odd->next = evenstart;
      return head;
    }
};
