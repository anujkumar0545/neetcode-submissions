class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> sey;
        for(int i = 0;i<nums.size();i++)
        {
            if(sey.count(nums[i]))
                return true;
           sey.insert(nums[i]);
        }
        return false;
    }
};