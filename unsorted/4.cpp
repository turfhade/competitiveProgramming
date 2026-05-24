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
    ll a;
    cin >> a;
    vll apples(a);
    ll sum = 0;
    for (ll i = 0; i < a; i++)
    {
        cin >> apples[i];
        sum += apples[i];
    }
    sort(apples.begin(), apples.end(), greater<ll>());

    float div = sum / 2.0;
    ll gp1 = apples[0], gp2 = 0;
    for (int i = 0; i < a; i++)
    {
        if (gp1 + apples[a - 1 - i] < div)
        {
            gp1 += apples[a - 1 - i];
        }
        else
        {
            break;
        }
    }
    gp2 = sum - gp1;

    cout << abs(gp1 - gp2) << "\n";
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