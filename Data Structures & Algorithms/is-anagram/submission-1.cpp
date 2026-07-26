class Solution {
public:
    bool isAnagram(string s, string t)
    {
        std::map<char, int> freq1;
        std::map<char, int> freq2;

        if(s.size()!= t.size())
            return false;

        for(char ch: s)
        {
            freq1[ch]++;
        }

        for(char ch: t)
        {
            freq2[ch]++;
        }
        if(freq1.size()!=freq2.size())
            return false;
        for(char ch: t)
        {
           if(freq1[ch] != freq2[ch])
                return false; 
        }

        return true;
        
    }
};
