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
    vll arr(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    ll x = 0;

    ll errors = 0;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 != n)
        {
            if (arr[i] != arr[i + 1])
            {
                errors++;
            }
        }
    }
    if (errors == 0)
    {
        cout << "0\n";
        return;
    }
    ll operations = 0;
    ll x = sum / n;
    while (errors != 0)
    {

        operations++;
        for (ll j = 0; j < n; j++)
        {
            if (arr[j] < x)
            {
                arr[j] += 1;
            }
            else if (arr[j] > x)
            {
                arr[j] -= 1;
            }
            else if (arr[j] == x)
            {
                arr[j] == arr[j];
            }
        }
        errors = 0;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (i + 1 != n)
            {
                if (arr[i] != arr[i + 1])
                {
                    errors++;
                }
            }
        }
        // a
    }
    cout << operations << "\n";
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