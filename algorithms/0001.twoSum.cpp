#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_cache;
        for (int i=0; i < nums.size(); i++) {
            if (num_cache.count(target - nums[i])) {
                return {num_cache[target - nums[i]], i};
            }
            num_cache[nums[i]] = i;
        }
        return {};
    }
};
