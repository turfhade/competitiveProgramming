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

    vll a(n);
    vll b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vll aa(n);
    vll bb(n);

    for (ll i = 0; i < n; i++)
    {
        aa[i] = max(a[i], b[i]);
        bb[i] = min(a[i], b[i]);
    }

    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += aa[i];
    }
    cout << *max_element(bb.begin(), bb.end()) + sum << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}