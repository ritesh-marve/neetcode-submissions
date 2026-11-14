class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> dict;
        for(int i=0;i<nums.size();i++)
        {
            dict[nums[i]]=0;
        }
        if (nums.size()!=dict.size()) return true;
        else return false;
    }
};