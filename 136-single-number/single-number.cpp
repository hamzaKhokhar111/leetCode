class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mymap;

        // frequency count
        for (int num : nums) {
            mymap[num]++;
        }

        // find element with frequency 1
        for (auto pair : mymap) {
            if (pair.second == 1) {
                return pair.first;
            }
        }

        return -1; // agar nahi mila (problem statement ke hisaab se ye case nahi hoga)
    }
};
