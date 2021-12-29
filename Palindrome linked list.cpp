class Solution {
public:
    void construct_string(ListNode* head,string &s1,string &s2){
        if(head==NULL)
            return;
        s1+=head->val;
        construct_string(head->next,s1,s2);
        s2+=head->val;
    }
    bool isPalindrome(ListNode* head) {
        string s1,s2;
        construct_string(head,s1,s2);
        return s1==s2;
    }
};
