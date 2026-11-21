class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int f=0;
        int n=numbers.size();
        int l=n-1;
        while(f<l)
        {
            if(numbers[f]+numbers[l]==target) return {f+1,l+1};
            else if(numbers[f]+numbers[l]<target)
            {
                f++;
            }
            else if(numbers[f]+numbers[l]>target)
            {
                l--;
            }
        }
        return {};
    }
};
