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
        else 
        {
          if(st.empty())
            return false; 
          if(x == ']' && st.top() != '[')
          {
             return false;
          }
          if(x == '}' && st.top() != '{')
          {
            return false;
          }
          if(x == ')' && st.top() != '(')
          {
            return false;
          }
          st.pop();
        }
      }
      if(st.size() != 0)
        return false;
      return true;
        
    }
};
