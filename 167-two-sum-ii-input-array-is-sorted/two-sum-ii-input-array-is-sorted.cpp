class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1}; // 1-indexed answer
            } 
            else if (sum < target) {
                left++; // sum chhota hai, left aage badhao
            } 
            else {
                right--; // sum bada hai, right peeche lao
            }
        }
        return {}; // kabhi yahan nahi aayega kyunki solution guaranteed hai
    }
};
