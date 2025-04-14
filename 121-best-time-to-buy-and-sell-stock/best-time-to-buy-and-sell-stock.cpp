#include <vector>
#include <algorithm> // For std::min and std::max
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int minsofar = prices[0]; // Use 'prices' instead of 'a'

        for (int i = 0; i < prices.size(); i++) {
            minsofar = min(minsofar, prices[i]); // Corrected: use std::min
            int profit = prices[i] - minsofar;
            maxprofit = max(maxprofit, profit); // Corrected: use std::max
        }

        return maxprofit; // Add semicolon at the end
    }
};
