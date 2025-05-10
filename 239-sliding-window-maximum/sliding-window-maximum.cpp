#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq; // stores indices
        vector<int> result;

        for (int i = 0; i < nums.size(); ++i) {
            // Remove indices of elements not in current window
            if (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();

            // Remove elements smaller than the current element from the back
            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

            // Add current element's index
            dq.push_back(i);

            // If window has hit size k, add max to result
            if (i >= k - 1)
                result.push_back(nums[dq.front()]);
        }

        return result;
    }
};
