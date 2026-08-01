class Solution {
public:
    bool isAnagram(string s, string t)
    {
        std::unordered_map<char, int> freq1;

        if(s.size()!= t.size())
            return false;

        for(char ch: s)
        {
            freq1[ch]++;
        }

        for(char ch: t)
        {
            freq1[ch]--;
        }
        for(auto & it : freq1)
        {
           if(it.second != 0)
                return false; 
        }

        return true;
        
    }
};
