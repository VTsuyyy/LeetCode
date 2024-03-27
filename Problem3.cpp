class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string x, x1;
        int a;
        for(char i : s){
            a = x.find(i);
            if(a != -1){
                if(x.size() > x1.size()) x1 = x;
                x = &x[a+1];
            }
            x += i;
        }
        return max(x.size(), x1.size());
    }
};