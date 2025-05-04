class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j) {
        // Check bounds and water or already visited
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0') {
            return;
        }

        // Mark this cell as visited by turning it to '0'
        grid[i][j] = '0';

        // Visit all 4 adjacent cells
        dfs(grid, i + 1, j); // Down
        dfs(grid, i - 1, j); // Up
        dfs(grid, i, j + 1); // Right
        dfs(grid, i, j - 1); // Left
    }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;

        int count = 0;
        int m = grid.size();
        int n = grid[0].size();

        // Traverse the grid
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '1') {
                    ++count;             // New island found
                    dfs(grid, i, j);     // Flood fill this island
                }
            }
        }

        return count;
    }
};
