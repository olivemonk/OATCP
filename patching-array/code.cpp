#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int solve(vector<int> &nums, int n)
{
    int xx = nums.size();
    long long mx = 0, ans = 0;
    for (int i = 0; i < xx; i++)
    {
        while (nums[i] > (mx + 1))
        {
            mx = 2 * mx + 1;
            ans++;
            if (mx >= n)
            {
                return ans;
            }
        }
        mx += nums[i];
        if (mx >= n)
        {
            return ans;
        }
    }
    while (mx < n)
    {
        mx = 2 * mx + 1;
        ans++;
    }
    return ans;
}
int main()
{
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);

    vector<int> v;
    int x;
    while (cin >> x)
    {
        v.push_back(x);
        if (cin.peek() == '\n')
        {
            break;
        }
    }

    int n;
    cin >> n;
    int ans = solve(v, n);
    cout << ans;

    fclose(stdin);
    fclose(stdout);
}