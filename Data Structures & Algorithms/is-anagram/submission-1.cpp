class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        
        vector<int> count(26,0);
        for(int i=0;i<s.size();i++)
        {
            count[s[i]-'a']= count[s[i]-'a']+1;
            count[t[i]-'a']= count[t[i]-'a']-1;
        }

        for(auto& c:count)
        {
            if(c!=0) return 0;
        }
        return true;

    }
};
