class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.empty()) return "";
        vector<int> sizes;
        string res;
        for(const auto& str:strs)
        {
            sizes.push_back(str.size());
        }
        for(const auto& size:sizes)
        {
            res.append(to_string(size));
            res.push_back(',');
        }
        res.push_back('#');
        for(const auto& str:strs)
        {
            res.append(str);
        }
        return res;
    }

    vector<string> decode(string s) {
        if (s.empty()) return {};
        vector<string> ans;
        vector<int> sizes;
        int i=0;
        while(s[i]!='#')
        {
            int j=i;
            while(s[j]!=',')
            {
                j++;
            }
            sizes.push_back(stoi(s.substr(i,j-i)));
            i=j+1;
        }
        i++;
        for(auto& size:sizes)
        {
            ans.push_back(s.substr(i,size));
            i+=size;
        }
        return ans;
    }
};
