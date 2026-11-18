class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for (const auto&  num:nums)
        {
            count[num]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minheap;
        for(const auto& p:count)
        {
            minheap.push({p.second,p.first});
        }
        while(minheap.size()>k)
        {   
            minheap.pop();
        }
        vector<int> ans;
        while(!minheap.empty())
        {
            ans.push_back(minheap.top().second);
            minheap.pop();
        }
        return ans;
    }
};
