class Solution {
public:
    bool isAlphaNumeric(char ch)
    {
        if((ch >='a' && ch<='z')||(ch >='A' && ch<='Z')|| (ch >='0' && ch<='9'))
            return true;
        return false;

    }
    char toLowerCase(char ch)
    {
        if (ch >= 'A' && ch <= 'Z')
            return ch + ('a' - 'A');

        return ch;
    }

    bool isPalindrome(string s) 
    {
        int f = 0;
        int l = s.length()-1;
        while(f<l)
        {
            while(f<l && !isAlphaNumeric(s[f]))
            {
                f++;
            }
            while(f<l && !isAlphaNumeric(s[l]))
            {
                l--;
            }
            if(toLowerCase(s[l])!= toLowerCase(s[f]))
                return false;
            f++;
            l--;
        }
        return true;
        
    }
};
