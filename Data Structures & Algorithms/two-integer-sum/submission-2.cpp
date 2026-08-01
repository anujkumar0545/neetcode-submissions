class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
      unordered_map<int, int> valIndex;
      for(int i = 0; i< nums.size();i++)
      {
        if(valIndex.end() != valIndex.find(target-nums[i]))
        {
          return {valIndex[target-nums[i]], i};
        }
        valIndex[nums[i]] = i;     
      }
      return{};      
        
    }
};
