class Solution {
public:
    int romanToInt(string s) {
        int a = 0, b = 0, n[128];
        n['I'] = 1; n['V'] = 5; n['X'] = 10; n['L'] = 50;
        n['C'] = 100; n['D'] = 500; n['M'] = 1000;
        for(char i : s){
            if(n[i] > b) a -= b;
            else a += b;
            b = n[i];
        }
        a += b;
        return a;
    }
};