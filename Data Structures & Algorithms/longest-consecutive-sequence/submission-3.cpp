class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        int i = 1;
        int count = 1;
        int maxCount = count;
        while(i< nums.size())
        {
            sort(nums.begin(), nums.end());
            if(nums[i]- nums[i-1] == 1)
            {
                i++;
                count++;
            }
            else if(nums[i]- nums[i-1] == 0)
            {
                i++;
            }
            else
            {
                count = 1;
                i++;
            }
            maxCount = max(count, maxCount);

        }
        return maxCount;
    }
};
