class Solution {
public:

    string encode(vector<string>& strs) {
        string code = "";
        for(auto str:strs)
        {
            code+= std::to_string(str.length()) +'#'+ str;
        }
        return code;
    }

    vector<string> decode(string str) {

        vector<string> result;
        int i=0;
        while(i<str.size())
        {
            int length = 0;
            string num = ""; 
            while(i<str.size() && str[i]!= '#')
            {
                num.push_back(str[i]);
                i++;
            }
            length = std::stoi(num);
            i++;
            result.push_back(str.substr(i,length));  
            i = i+length;  
        }
        return result;
        




    }
};
