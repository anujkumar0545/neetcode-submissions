class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> arr;

        for(int i: nums)
        {
            if(arr[i] == 0)
                arr[i]++;
            else
                return true;
        }
        return false;
        
    }
};