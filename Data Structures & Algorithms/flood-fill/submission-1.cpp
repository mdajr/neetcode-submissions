class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        m = image.size();
        n = image[0].size();
        int original_color = image[sr][sc];
        if (original_color == color) return image;

        dfs(image, sr, sc, original_color, color);

        return image;
    }

private:
    int m, n;
    void dfs(vector<vector<int>>& image, int r, int c, int original_color, int color) {
        if (r < 0 || r >= m || c < 0 || c >= n || image[r][c] != original_color) return;

        image[r][c] = color;
        dfs(image, r+1, c, original_color, color);
        dfs(image, r-1, c, original_color, color);
        dfs(image, r, c+1, original_color, color);
        dfs(image, r, c-1, original_color, color);
    }
};