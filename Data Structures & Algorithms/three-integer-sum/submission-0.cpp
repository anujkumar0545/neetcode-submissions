class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        std::set<std::vector<int>>triplets;

        sort(nums.begin(), nums.end());
        int target = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            int current = nums[i];
            int left = i+1;
            int right = nums.size()-1;
            while(left < right)
            {
                if((current + nums[left] + nums[right]) == target)
                {
                    triplets.insert({current, nums[left], nums[right]});
                    left++;right--; 

                }
                else if((current + nums[left] + nums[right]) > target)
                {
                    right--;
                }
                else if((current + nums[left] + nums[right]) < target)
                {
                    left++;
                }                
            }
        }
        vector<vector<int>> output;
        for(auto x : triplets)
        {
            output.push_back(x);
        }

        return output;
        
    }
};
