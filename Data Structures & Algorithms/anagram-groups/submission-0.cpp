class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> groups;
        vector<bool> visited(strs.size(), false);
        for(int i = 0; i<strs.size();i++)
        {
            vector<string> group;
            if(visited[i])
                continue;

            visited[i] = true;
            group.push_back(strs[i]);

            for(int j = i+1;j< strs.size();j++)
            {
                if(visited[j])
                    continue;
                if(isAnagram(strs[i], strs[j]))
                {
                    visited[j] = true;
                    group.push_back(strs[j]);
                }
            }
            groups.push_back(group);
        }
        return groups;        
    }
    
    bool isAnagram(string &strs1, string strs2)
    {
        if(strs1.length() != strs2.length())
            return false;
        vector<int> freq(26,0);

        for(size_t i = 0; i<strs1.size();i++)
        {
            freq[strs1[i]-'a']++;  
        }
        for(size_t i = 0; i<strs2.size();i++)
        {
            freq[strs2[i]-'a']--;  
        }
        for(int i = 0;i< 26;i++ )
        {
            if(freq[i]!= 0)
                return false;
        }
        return true;
    }
};
