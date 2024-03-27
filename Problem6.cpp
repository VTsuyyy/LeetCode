class Solution {
public:
    string convert(string s, int numRows) {
        int far = numRows*2-2, near = 0, len = s.size();
        if(numRows == 1) return s;
        string res;
        if(len < numRows) numRows = len;
        for(int i = 0; i < numRows; ++i){
            int j = i;
            res += s[j];
            while(j < len){
                if(far){
                    j += far;
                    if(j < len) res += s[j];
                }
                if(near){
                    j += near; 
                    if(j < len) res += s[j];
                }
            }
            far -= 2;
            near += 2;
        }
        return res;
    }
};