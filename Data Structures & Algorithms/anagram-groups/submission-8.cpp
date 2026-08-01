class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        string key = "";
      unordered_map<string, vector<string>> groups;
      for(auto &s: strs)
      {
        key = s;
        sort(key.begin(), key.end());
        groups[key].push_back(s);
      }

      vector<vector<string>> result;
      for(auto &vec: groups)
      {
        result.push_back(vec.second);
      }
      return result;

    }   
    
};
