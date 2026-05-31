class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
       if(!head){
            return head;
        }
        
        ListNode * h = nullptr;
        ListNode *ret = nullptr;
        while(head){
            if(head->val != val){
                if(!h){
                    h = new ListNode(head->val);
                    ret = h;
                }else{
                    h->next = new ListNode(head->val);
                    h = h->next;
                }    
            }
            head = head->next;
        }
        return ret;  
    }
};
