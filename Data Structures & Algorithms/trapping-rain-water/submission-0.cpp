class Solution {
public:
    int trap(vector<int>& heights) {
        vector<int> leftmax(heights.size());
        vector<int>rightmax(heights.size());
        int maxl = 0;
        int maxR = 0;
        for(int i = 0;i<heights.size();i++)
        {
            maxl = max(maxl, heights[i]);
            leftmax[i] = maxl;
        }

        for(int j = heights.size()-1;j>=0;j--)
        {
            maxR = max(maxR, heights[j]);
            rightmax[j] = maxR;
        }
        int ans = 0;
       for(int i = 0;i<heights.size();i++)
        {
            ans+= min(rightmax[i], leftmax[i])- heights[i];
        }
        return ans;
        
    }
};
