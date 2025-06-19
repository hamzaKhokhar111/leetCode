class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int i = 0;
        int j = height.size() - 1;

        while (i < j) {
            int h = min(height[i], height[j]);
            int w = j - i;
            int currentWater = h * w;
            maxwater = max(maxwater, currentWater);

            // Move the pointer at the shorter line
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }

        return maxwater;
    }
};
