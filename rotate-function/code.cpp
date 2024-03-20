#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);

    int n;
    cin >> n;
    if (n <= 0) {
        if (n == 1) {
            int x;
            cin >> x;
        }
        cout << 0;
        return 0;
    }
    vector<ll> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<ll> dp(n, 0);
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        sum += nums[i];
        dp[0] += (i * nums[i]);
    }

    ll ans = dp[0], idx = n - 1;
    for (int i = 1; i < n; i++) {
        dp[i] = sum + dp[i - 1] - (n * nums[idx]);
        --idx;
        ans = max(dp[i], ans);
    }
    cout << ans;

    fclose(stdin);
    fclose(stdout);
}