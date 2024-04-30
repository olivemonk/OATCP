#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
      vector<int>v;
    int x;
    while(cin>>x)
    {
        v.push_back(x);
        if (cin.peek() == '\n') 
        {
            break; 
        }
    }

    ll n=v.size(),ans = 0;
    for (int i = 0; i < 32; i++)
    {
        ll cnt = 0;
        for (int j = 0; j < n; j++)
        {
            cnt += (v[j] >> i) & 1;
        }
        ans += (cnt) * (n - cnt);
    }

    cout << ans<<endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}