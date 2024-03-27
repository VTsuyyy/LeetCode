class Solution {
public:
    int maxArea(vector<int>& ht) {
        int i = 0, j = ht.size()-1, mx = 0;
        while(j > i)
            mx = max(mx, (j-i)*(ht[j]>ht[i]?ht[i++]:ht[j--]));
        return mx;
    }
};