class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> groups;
        unordered_map<string, vector<string>>groupMap;
        for(int i = 0; i<strs.size();i++)
        {
            string key = getUniquekey(strs[i]);
            groupMap[key].push_back(strs[i]);
        }
        unordered_map<string, vector<string>>::iterator itr = groupMap.begin();
        for(;itr!=groupMap.end();itr++)
        {
            groups.push_back(itr->second);
        }
        return groups;        
    }
    string getUniquekey(string& str)
    {
        int freq[26] = {0};
        for(char ch: str)
        {
            freq[ch-'a']++;
        }
        string key = "";
        for(int i = 0;i< 26;i++)
        {
            key+= "*" + to_string(freq[i]);
        }
        return key;
    }
    
    
};
