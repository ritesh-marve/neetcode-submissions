class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);
        
        int p=1;
        for(int i=0;i<n;i++)
        {
            prefix[i]=p;
            p*=nums[i];
        }
        int s=1;
        for(int i=n-1;i>=0;i--)
        {
            suffix[i]=s;
            s*=nums[i];
            ans[i]=prefix[i]*suffix[i];
        }

        return ans;

    }
};
