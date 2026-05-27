#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vll = vector<ll>;
using vi = vector<int>;
const ll MOD = 1e9 + 7;

void solve()
{
    ll n, x;

    cin >> n;
    cin >> x;

    vll coins(n);
    for (ll &i : coins)
        cin >> i;

    vll dp(x + 1, 0);
    dp[0] = 1;
    for (ll i = 1; i <= x; i++)
    {
        for (ll c : coins)
        {
            if (i - c > 0)
            {
                dp[i] = (dp[i] + 1) % MOD;
            }
        }
    }
    cout << dp[x];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}