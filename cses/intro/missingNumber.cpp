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
    ll n;
    cin >> n;
    vll arr(n - 1);
    vll sum(n + 1, 0);
    vll csum(n + 1, 0);
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum[i + 1] = sum[i] + arr[i];
        // sum[1] = sum[0] + 1
        // sum[2] = sum[1] + 2 // 3 which is 1 + 2
    }
    for (ll i = 1; i <= n; i++)
    {
        csum[i] += csum[i - 1] + i;
        // csum 1 = csum 0 + 1 = 1
        // csum 2 = csum 1 + 2 = 3
    }
    cout << (csum[n] - sum[n - 1]);
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