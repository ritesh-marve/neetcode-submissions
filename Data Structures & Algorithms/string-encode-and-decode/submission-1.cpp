class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(const auto& str:strs)
        {
            res.append(to_string(str.size()));
            res.append("#");
            res.append(str);
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i<s.size())
        {
            int j=i;
            while(s[j]!='#'){
                j++;
            }  
            int size=stoi(s.substr(i,j-i));
            i=j+1;
            res.push_back(s.substr(i,size));
            i+=size;    
        }
        return res;
    }
};
