#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second
#define rep(i, a, b) for (int i = (a); i < (b); i++)

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve()
{
    ll n, x;
    cin >> n;
    cin >> x;

    vll coins(n);
    for (ll &c : coins)
        cin >> c;

    // x, n// x 11 , 2+2+2 etc
    // x 0 = 1 sig;
    // x 1 = 0 if no ;
    // x 2 = dp[2 - 2] +1
    // x 4 = dp[4 - 2] which is dp[2] === 1 comb; if more coin:
    // x 4 = dp[4 - 4] equals to dp[0] so plus 1 comb
    // so dp[4] 4 comb if coin 2 and 4, 2 + 2, 4, thats it bruh has 2 comb
    vll dp(x + 1, 0);
    dp[0] = 1;
    for (ll i = 1; i <= x; i++)
    {
        for (ll c : coins)
        {
            if (i - c >= 0)
            {
                dp[i] = (dp[i] + dp[i - c]) % MOD;
            }
        }
    }
    cout << dp[x];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}