class Solution {
public:
    struct node{
        int a;
        node *next;
        node(int a1, node *n1): a(a1), next(n1) {}
    };
    string longestPalindrome(string s) {
        int a = 0, b = 1, len = s.size();
        node *p = new node(1, 0), *tmp;
        p = new node(0, p);
        for(int i = 1; i < len; ++i){
            tmp = p;
            while(tmp->next){
                if(tmp->a && s[tmp->a - 1] == s[i]){
                    --tmp->a;
                    tmp = tmp->next;
                }
                else{
                    if(i - tmp->a > b - a){
                        b = i;
                        a = tmp->a;
                    }
                    tmp->a = tmp->next->a;
                    tmp->next = tmp->next->next;
                }
            }
            if(s[i] == s[i-1]) p = new node(i-1, p);
            p = new node(i, p);
        }
            tmp = p;
            while(tmp->next){
                if(len - tmp->a > b - a){
                    b = len;
                    a = tmp->a;
                }
                tmp = tmp->next;
            }
        s[b] = s[len];
        return &s[a];
    }
};