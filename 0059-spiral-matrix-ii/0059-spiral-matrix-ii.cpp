class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> ans(n, vector<int>(n));

        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = n - 1;

        int value = 1;

        while (top <= bottom && left <= right) {

            // Top: left -> right
            for (int j = left; j <= right; j++) {
                ans[top][j] = value++;
            }
            top++;

            // Right: top -> bottom
            for (int i = top; i <= bottom; i++) {
                ans[i][right] = value++;
            }
            right--;

            // Bottom: right -> left
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    ans[bottom][j] = value++;
                }
                bottom--;
            }

            // Left: bottom -> top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans[i][left] = value++;
                }
                left++;
            }
        }

        return ans;
    }
};