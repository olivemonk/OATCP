#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int solve(vector<vector<int>> &b)
{
    int n = b.size();
    int m = b[0].size();

    vector<int> row(n);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            row[i] |= b[i][j] << (m - j);
        }
    }

    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int bits = __builtin_popcount(row[i] & row[j]);
            int count = bits * (bits - 1) / 2;
            ans += count;
        }
    }

    return ans;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<vector<int>> b(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
    int result = solve(b);

    cout << result << endl;
    fclose(stdin);
    fclose(stdout);

    return 0;
}