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
    vll arrI(0);
    ll n;
    cin >> n;
    vll arr(n);
    ll operations = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = n - 1; i < 0; i--)
    {
        if (arr[i] < 0)
        {
            arrI.push_back(arr[i]);
            operations++;
            ll bruh = i;
            for (ll i = 0; i < bruh; i++)
            {
                arr[i] = arr[i] * -1;
            }
        }
    }
    cout << operations << "\n";
    for (ll i = 0; i < arrI.size(); i++)
    {
        cout << arrI[i];
    }
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