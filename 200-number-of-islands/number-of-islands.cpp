class Solution {
public:
    void dfs(vector<vector<char>>& grid, int row, int col) {
        int n = grid.size();
        int m = grid[0].size();
        
        // Boundary check and if the current cell is water or already visited (changed to '0')
        if (row < 0 || row >= n || col < 0 || col >= m || grid[row][col] == '0') {
            return;
        }

        // Mark the current cell as visited by changing '1' to '0'
        grid[row][col] = '0';

        // Recursively call DFS for all 4 adjacent cells
        dfs(grid, row + 1, col); // Down
        dfs(grid, row - 1, col); // Up
        dfs(grid, row, col + 1); // Right
        dfs(grid, row, col - 1); // Left
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        if (n == 0) return 0;
        int m = grid[0].size();

        int numIslands = 0;

        // Traverse the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // If the cell contains '1', it's a new island
                if (grid[i][j] == '1') {
                    numIslands++;
                    dfs(grid, i, j); // Perform DFS to mark the entire island
                }
            }
        }

        return numIslands;
    }
};
