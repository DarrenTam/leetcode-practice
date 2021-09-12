//
// Created by darre on 2021/9/1.
//

class Solution {
public:
    int maxAreaOfIsland(vector <vector<int>> &grid) {
        int width = grid[0].size() - 1;
        int height = grid.size() - 1;
        int count = 0;
        std::map<std::string, int> m;

        for (int i = 0; i <= height; i++) {
            for (int j = 0; j <= width; j++) {
                count = max(searchAndCount(grid, i, j, height, width, m), count);
            }
        }
        return count;

    }

    int searchAndCount(vector <vector<int>> &grid, int c, int r, int maxC, int maxR, std::map<std::string, int> &m) {
        int count = 0;
        if (grid[c][r] == 1 && m.find(to_string(c) + 'c' + to_string(r) + 'r') == m.end()) {
            m[to_string(c) + 'c' + to_string(r) + 'r']++;
            count++;
            if (r != 0)count += searchAndCount(grid, c, r - 1, maxC, maxR, m);
            if (c != 0)count += searchAndCount(grid, c - 1, r, maxC, maxR, m);
            if (r < maxR)count += searchAndCount(grid, c, r + 1, maxC, maxR, m);
            if (c < maxC)count += searchAndCount(grid, c + 1, r, maxC, maxR, m);
        }
        return count;
    }


};