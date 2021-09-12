//
// Created by darre on 2021/9/1.
//

class Solution {
public:
    vector <vector<int>> floodFill(vector <vector<int>> &image, int sr, int sc, int newColor) {
        int maxR = image.size() - 1;
        int maxC = image[0].size() - 1;
        if (image[sr][sc] != newColor) searchAndUpdate(image, sr, sc, newColor, image[sr][sc], maxR, maxC);

        return image;
    }

    void searchAndUpdate(vector <vector<int>> &image, int r, int c, int newColor, int rootColor, int maxR, int maxC) {

        if (image[r][c] == rootColor) {
            image[r][c] = newColor;
            if (r != 0) searchAndUpdate(image, r - 1, c, newColor, rootColor, maxR, maxC);
            if (c != 0) searchAndUpdate(image, r, c - 1, newColor, rootColor, maxR, maxC);
            if (r < maxR) searchAndUpdate(image, r + 1, c, newColor, rootColor, maxR, maxC);
            if (c < maxC) searchAndUpdate(image, r, c + 1, newColor, rootColor, maxR, maxC);
        }

    }
};