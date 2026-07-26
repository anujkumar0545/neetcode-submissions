class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> groups;
        unordered_map<string, vector<string>>groupMap;
        for(string str: strs)
        {
            int freq[26] = {0};
            for(char ch: str)
                freq[ch-'a']++;
            string key = "";
            for(int j = 0;j< 26;j++)
            {
              key+= '#' + freq[j];
            }
            groupMap[key].push_back(str);
        }
        
        for(auto& [key, vals]: groupMap)
        {
            groups.push_back(vals);
        }
        return groups;        
    }
    
    
};
