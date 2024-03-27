class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> s;
        int a, i = 0;
        for(i; i < nums.size(); ++i){
            if(s[target-nums[i]]) break;
            s[nums[i]] = i+1;
        }
        vector<int> x;
        x.push_back(s[target-nums[i]]-1);
        x.push_back(i);
        return x;
    }
};