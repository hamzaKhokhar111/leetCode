#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mymap;

        for (int i = 0; i < nums.size(); i++) {
            mymap[nums[i]]++;  // har number ka count barhao
        }

        // ab check karo konsa number sirf 1 baar aya
        for (int i = 0; i < nums.size(); i++) {
            if (mymap[nums[i]] == 1) {
                return nums[i];
            }
        }

        return -1;  // fallback
    }
};
