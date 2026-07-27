class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int i = 0;
        int j = 0;
        int maxlength = 0;
        unordered_set<char> substring;
      while(j<s.length())
      {
        while(j<s.length() && substring.contains(s[j]))
        {
            substring.erase(s[i]);
            i++;
        }
        substring.insert(s[j]);
        maxlength = std::max(maxlength, (int)substring.size());
        j++;
      }
      return maxlength;

    }
};
