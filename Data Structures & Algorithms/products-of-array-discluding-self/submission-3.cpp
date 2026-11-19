class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int zerocount=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            { 
                product*=nums[i];
            }
            else{
                zerocount++;
            }
           
        }
        if(zerocount>1)
        {
            return vector<int>(nums.size(),0);
        }

        vector<int> result(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(zerocount>0){
                result[i]=(nums[i]==0)? product :0;
            }
            else {result[i]=product/nums[i];}
        }
        return result;
    }
};
