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
    string n;
    cin >> n;

    ll max = 1;
    if (n.size() == 0)
    {
        cout << "0";
        return;
    }
    ll maxcounter = 1;
    for (int i = 0; i < n.size(); i++)
    {
        if (i + 1 != n.size())
        {
            // AABBB
            // AA = maxcount 2
            // AB = max = 2, maxcount = 1
            // BB = maxcount = 2
            // BB == maxcount = 3
            if (n.at(i) == n.at(i + 1))
            {
                maxcounter++;
                continue;
            }
            // A max
            else
            {
                if (max < maxcounter)
                {
                    max = maxcounter;
                }
                maxcounter = 1;
            }
        }
        else
        {
            if (max < maxcounter)
            {
                max = maxcounter;
            }
        }
    }
    cout << max;
    return;
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