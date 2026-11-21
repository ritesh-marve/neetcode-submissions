class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int f=i+1;
            int l=nums.size()-1;
            while(f<l)
            {
                int sum=nums[i]+nums[f]+nums[l];
                if(sum>0)
                {
                    l--;
                }
                else if(sum<0)
                {
                    f++;
                }
                else {
                    res.push_back({nums[i], nums[f], nums[l]});
                    l--;
                    f++;
                    while(f < l && nums[f]==nums[f-1]){
                        f++;
                    }

                }
            }
        }
        return res;
    }
};
