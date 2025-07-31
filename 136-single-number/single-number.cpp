#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mymap;  // ❌ aap ne "unorered_map" likha tha, usse error aayega

        for (int i = 0; i < nums.size(); i++) {
            mymap[nums[i]]++;  // number ka count badhao
        }

        // Har number check karo map se jo sirf ek bar aaya ho
        for (auto it : mymap) {
            if (it.second == 1) {
                return it.first;
            }
        }

        return -1; // Default case, agar kuch na mile (lekin problem ke mutabiq yeh case nahi aayega)
    }
};
