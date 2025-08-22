class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;  // 0 and 1 ke liye direct return
        
        long long left = 1, right = x / 2, ans = 0;
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;
            
            if (square == x) {
                return mid; // perfect square case
            } else if (square < x) {
                ans = mid;     // abhi tak best answer
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return ans;
    }
};
