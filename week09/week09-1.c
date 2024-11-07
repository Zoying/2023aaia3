int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int m = accountsSize;
    int n = accountsColSize[0];
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int total = 0;
        for (int j = 0; j < n; j ++)
        {
            total = total + accounts[i][j];
        }
        if (total > ans) ans = total;
    }
    return ans;
}
