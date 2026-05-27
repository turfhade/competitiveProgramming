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
    ll n, m, k;
    cin >> n >> m >> k;

    vll psize(n + 1, 0);
    vll asize(m + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        cin >> psize[i];
    }

    for (ll i = 1; i <= m; i++)
    {
        cin >> asize[i];
    }

    sort(asize.begin() + 1, asize.end());
    sort(psize.begin() + 1, psize.end());

    // 45 60 60 80psize
    // 30 60 75    asize
    ll preferred = 1;
    ll chosen = 0;
    for (ll x = 1; x <= n; x++)
    {
        for (ll b = preferred; b <= m; b++)
        {
            if (psize[x] >= asize[b] - k && psize[x] <= asize[b] + k)
            {
                chosen++;
                preferred = b + 1;
                break;
            }
            else if (psize[x] > asize[b])
            {
                continue;
            }
            else
            {
                preferred = b;
                break;
            }
        }
    }
    cout << chosen;
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