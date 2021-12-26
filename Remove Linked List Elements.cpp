class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return head;
        if(head->val==val){
            ListNode* temp=head->next;
            head->next=NULL;
            delete(head);
            return removeElements(temp,val);
        }
        head->next=removeElements(head->next,val);
        return head;
        
    }
};
