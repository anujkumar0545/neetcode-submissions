class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        int i = 1;
        int count = 1;
        int maxCount = count;
        int current;
        std::unordered_set<int> setnums;
        for(auto val : nums)
        {
            setnums.insert(val);
        }
        for(auto num: setnums)
        {
            current = num;
            if(setnums.find(current-1) == setnums.end())
            {
                count = 1;
                while(setnums.find(current+1) != setnums.end())
                {
                    count++;
                    current++;
                }
            }
            maxCount = max(count, maxCount);

        }
        return maxCount;
    }
};
