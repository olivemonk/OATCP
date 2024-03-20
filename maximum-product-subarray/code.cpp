#include <bits/stdc++.h>
typedef long long ll;
const ll mod = 1e9 +7;
using namespace std;
 
 
int main(){
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);

    ll n;
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    vector<ll> nums(n);
    for (ll i = 0; i < n; i++)
        cin >> nums[i];
    ll ans = LLONG_MIN;
    ll dp = 1;

    for (ll i = 0; i < n; i++) {
        dp *= nums[i];
        ans = max(ans, dp);
        if (nums[i] == 0)
            dp = 1;
    }
    dp = 1;
    for (ll i = n - 1; i >= 0; i--) {
        dp *= nums[i];
        ans = max(ans, dp);
        if (nums[i] == 0)
            dp = 1;
    }
    cout << ans%mod;

    fclose(stdin);
    fclose(stdout);
}