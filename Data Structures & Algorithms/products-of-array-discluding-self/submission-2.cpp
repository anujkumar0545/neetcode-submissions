class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int numzero = 0;
        int prod= 1;
        for(auto val: nums)
        {
            if(val!=0)
            {
             prod*=val;
            }
            else
            {
                numzero++;

            }
        }
        if(numzero >1) prod = 0;
        vector<int> output(nums.size());
        for(int i = 0;i<nums.size();i++)
        {
            if(numzero > 0 && nums[i] == 0)
            {
                output[i] = prod;
            }
            else if(numzero > 0 && nums[i] != 0)
            {
                output[i] = 0;
            }
            else
                output[i] = prod/nums[i];
        }
        return output;
    }
};
