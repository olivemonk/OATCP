#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
string fn(string s, int k)
{
    int n = s.size();
    stack<char> st;
    for (char x : s)
    {
        while (!st.empty() && k > 0 && st.top() > x)
        {
            st.pop();
            k -= 1;
        }

        if (!st.empty() || x != '0')
            st.push(x);
    }

    while (!st.empty() && k--)
    {
        st.pop();
    }
    if (st.empty())
    {
        return "0";
    }

    while (!st.empty())
    {
        s[n - 1] = st.top();
        st.pop();
        n -= 1;
    }
    return s.substr(n);
}

int main()
{
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    string s;
    cin >> s;
    int k;
    cin >> k;
    string ans = fn(s, k);
    cout << ans << endl;

    fclose(stdin);
    fclose(stdout);
}