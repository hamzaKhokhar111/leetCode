#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; // Stores {value, index}
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; 
            
            if (map.find(complement) != map.end()) {
                return {map[complement], i}; // Found the solution
            }
            
            map[nums[i]] = i; // Store the current number and its index
        }
        
        return {}; // Return empty if no solution found (though problem guarantees a solution)
    }
};
