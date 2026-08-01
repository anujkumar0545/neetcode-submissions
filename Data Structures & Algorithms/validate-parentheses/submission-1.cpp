class Solution {
public:
    bool isValid(string s) 
    {
      unordered_map<char, char> match = {{')', '('}, {']', '['}, {'}', '{'}};
      stack<char> st;
      for(auto x: s)
      {
        if(x == '(' || x == '{' || x =='[')
        { 
          st.push(x);
        } 
        else if(st.empty())
          return false;       
        else if(x == ']' && st.top() == '[')
        {
          st.pop();
        }
        else if(x == '}' && st.top() == '{')
        {
          st.pop();
        }
        else if(x == ')' && st.top() == '(')
        {
          st.pop();
        }
        else
          return false;
      }
      if(st.size() != 0)
        return false;
      return true;
        
    }
};
