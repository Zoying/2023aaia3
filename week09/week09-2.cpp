class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m = mat.size();
        int ans = 0;
        for (int i = 0; i < m; i ++)
        {
            ans = ans + mat[i][i];
            ans = ans + mat[i][m - 1 - i];
        }
        if (m % 2 == 1) ans = ans - mat[m / 2][m / 2];
        return ans;
    }
};
