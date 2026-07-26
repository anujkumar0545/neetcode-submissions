class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> groups;
        unordered_map<string, vector<string>>groupMap;
        for(int i = 0; i<strs.size();i++)
        {
            int freq[26] = {0};
            for(char ch: strs[i])
            {
                freq[ch-'a']++;
            }
            string key = "";
            for(int j = 0;j< 26;j++)
            {
              key+= "*" + to_string(freq[j]);
            }
            groupMap[key].push_back(strs[i]);
        }
        unordered_map<string, vector<string>>::iterator itr = groupMap.begin();
        for(;itr!=groupMap.end();itr++)
        {
            groups.push_back(itr->second);
        }
        return groups;        
    }
    
    
};
