//boilerplate
#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
    #define dbg(x) cerr << #x << " = " << (x) << endl
    #define msg(x) cerr << ">>> " << x << endl
#else
    #define dbg(x)
    #define msg(x)
#endif
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

template <typename T>
void read(vector<T> &a)
{
    for (auto &x : a)
        cin >> x;
}
    /* since im noob gonna template this:
    ll n;
    cin >> n;
    vll arr(n);
    read(arr);
   */
void solve()
{
	ll n;
    cin >> n;
    vll arr(n);
	ll total=0;
	for(ll i = 0; i < n; i++)
	{
		cin >> arr[i];
		if(i == 0)
		{
			continue;
		}
		if(arr[i] < arr[i-1])
		{
			msg("wassup g");
			dbg(arr[i]);
			ll diff = arr[i-1] -arr[i];
			total += diff;
			arr[i] = arr[i-1];
			continue;
		}
	}
	cout << total << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while (t--)
        solve();

    return 0;
}

