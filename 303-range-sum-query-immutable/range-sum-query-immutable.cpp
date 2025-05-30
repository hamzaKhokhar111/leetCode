class NumArray {
private:
    vector<int> prefix;  // store prefix sums

public:
    // Constructor: yahan pe prefix sum array banana hai
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefix.resize(n);

        prefix[0] = nums[0];  // pehla element same hoga

        // prefix[i] = nums[0] + nums[1] + ... + nums[i]
        for (int i = 1; i < n; ++i) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
    }

    // Sum from left to right
    int sumRange(int left, int right) {
        if (left == 0) return prefix[right];  // direct answer
        return prefix[right] - prefix[left - 1];  // subtract previous part
    }
};
