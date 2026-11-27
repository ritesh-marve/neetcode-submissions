class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        unordered_map<char, int> count;
        for (int i = 0; i < s1.size(); i++) {
            count[s1[i]]++;
        }

        for (int i = 0; i <=s2.size()-s1.size(); i++) {
            if (count.count(s2[i])) {
                auto temp = count;
                int j;
                for (j = i; j < s1.size() + i; j++) {
                    if (temp[s2[j]] > 0) {
                        temp[s2[j]]--;
                    } else
                        break;
                }
                if (j == s1.size() + i) return true;
            }
        }
        return false;
    }
};
