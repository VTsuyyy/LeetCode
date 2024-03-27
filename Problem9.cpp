class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int s[11] = {}, i = 0, j = 1;
        bool re = true;
        while(x){
            s[++i] = x % 10;
            x = x / 10;
        }
        while(i > j){
            if(s[i] != s[j]) re = false;
            ++j;
            --i;
        }
        return re;
    }
};