
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *root = new ListNode(), *p = root;
        p->next = new ListNode(0);
        int nho = 0, a;
        while(l1->next || l2->next){
            a = l1->val + l2->val + nho;
            p->next = new ListNode(a % 10);
            p = p->next;
            nho = a / 10;
            if(l1->next) l1 = l1->next;
            else l1->val = 0;
            if(l2->next) l2 = l2->next;
            else l2->val = 0;
        }
        a = l1->val + l2->val + nho;
        while(a){
            p->next = new ListNode(a % 10);
            p = p->next;
            a /= 10;
        }
        return root->next;
    }
};