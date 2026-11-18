class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(const auto& num:nums)
        {
            count[num]++;
        }
        vector<pair<int,int>> copy;
        for(const auto& p:count)
        {
            copy.push_back({p.second,p.first});
        }
        sort(copy.begin(),copy.end(),greater<>());

        vector<int> res;
        for (int i = 0; i < k; ++i) {
            res.push_back(copy[i].second);
        }
        return res;
    }
};
