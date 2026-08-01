

using namespace std;

class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int, int> freq;
      for(auto &x: nums)
      {
        freq[x]++;
      }
      vector<std::pair<int, int>> vec;
        for (auto i : freq) {
            vec.push_back({i.first, i.second});
        }
      sort(vec.begin(), vec.end(), [](auto& a, auto& b){
         return a.second > b.second ;
      });

       vector<int> result;

        for(int i = 0; i<vec.size() && i<k;i++)
        {
          result.push_back(vec[i].first);
        }

        return result;
    }
};
