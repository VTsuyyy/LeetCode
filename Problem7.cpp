class Solution {
public:
    int reverse(int x) {
        int res = 0, mx = INT_MAX/10;
        while(x){
            if(res > mx || res < -mx) return 0;
            res = res*10 + x%10;
            x /= 10;
        }
        return res;
    }
};