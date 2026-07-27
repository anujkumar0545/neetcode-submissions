class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int i = 0;
        int maxlength = 0;
      while(i<s.length())
      {
        int j = i;
        unordered_set<char> substring;
        while(j<s.length() && !substring.contains(s[j]))
        {
            substring.insert(s[j]);
            j++;
        }
        maxlength = std::max(maxlength, (int)substring.size());
        i++;
      }
      return maxlength;

    }
};
