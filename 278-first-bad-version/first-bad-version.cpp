// The API isBadVersion is already defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2; // overflow safe mid
            if (isBadVersion(mid)) {
                // agar mid bad hai toh answer mid ya uske left side me hoga
                right = mid;
            } else {
                // agar mid bad nahi hai toh answer right side me hoga
                left = mid + 1;
            }
        }
        return left; // ya return right, dono equal honge
    }
};
