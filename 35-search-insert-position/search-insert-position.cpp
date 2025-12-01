class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {

            // target mil jaye
            if(nums[i] == target) {
                return i;
            }

            // target chota ho current number se → yehi insert hoga
            if(nums[i] > target) {
                return i;
            }
        }

        // agar target sab se bada ho
        return nums.size();
    }
};
