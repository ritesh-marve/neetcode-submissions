class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashset(nums.begin(),nums.end());

        int maxcount=0;
        for(int num:hashset)
        {
            if(!hashset.contains(num-1))
            {
                int count=0;
                while(hashset.find(num)!=hashset.end())
                {
                    count++;
                    num++;
                }
                maxcount=max(maxcount,count);
            }
        }
        return maxcount;

         
    }
};
