class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int numzero = 0;
        int nonzeroprod= 1;
        for(auto val: nums)
        {
            if(val!=0)
              nonzeroprod*=val;
            else
                numzero++;
        }
        int prod = 0;
        vector<int> output(nums.size());
        for(int i = 0;i<nums.size();i++)
        {
            if(numzero > 1)
            {
                output[i] = prod;
            }
            else if(numzero == 1 && nums[i] == 0)
            {
                output[i] = nonzeroprod;
            }
            else if(numzero == 1 && nums[i] != 0)
            {
                output[i] = prod;
            }
            else
                output[i] = nonzeroprod/nums[i];
        }
        return output;
    }
};
