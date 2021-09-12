//
// Created by darre on 2021/9/1.
//

class Solution {
public:
    int maxAreaOfIsland(vector <vector<int>> &grid) {
        int width = grid[0].size() - 1;
        int height = grid.size() - 1;
        int count = 0;

        for (int i = 0; i <= height; i++) {
            for (int j = 0; j <= width; j++) {
                count = max(searchAndCount(grid, i, j, height, width), count);
            }
        }
        return count;

    }

    int searchAndCount(vector <vector<int>> &grid, int c, int r, int maxC, int maxR) {
        int count = 0;
        if (grid[c][r] == 1) {
            grid[c][r] = 0;
            count++;
            if (r != 0)count += searchAndCount(grid, c, r - 1, maxC, maxR);
            if (c != 0)count += searchAndCount(grid, c - 1, r, maxC, maxR);
            if (r < maxR)count += searchAndCount(grid, c, r + 1, maxC, maxR);
            if (c < maxC)count += searchAndCount(grid, c + 1, r, maxC, maxR);
        }
        return count;
    }


};