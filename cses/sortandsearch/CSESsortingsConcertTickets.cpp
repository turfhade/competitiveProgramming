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






bool debugmode=true;
void solve()
{
//ll n; cin >> n;vector<int> ar(n); for(auto& i : ar) cin >> i; //fill arr
    ll n,m;
    cin >> n;cin >> m;

    vll h(n+1,0);
    for (ll i = 1; i <= n; i++)
    {
        cin >> h[i];
    }

    vll t(m+1,0);
    for(ll i = 1; i <= m; i++) 
    {
        cin >> t[i]; 
    }

    //9 9 9 9 9 9 9
    //4 4 9

    sort(t.begin()+1, t.end(),greater<ll>());
    sort(h.begin()+1, h.end(),greater<ll>());

    ll up=1;
    ll down=1;

    while(down <= m)
    {
        if(up > n)
        {cout << -1 << "\n";down++;continue;}
        if(debugmode == true)
        {
            cout << "up " << up << endl;
            cout << "down " << up << endl;
            cout << "op " << t[down] << " " << h[up] << endl;
        }


        if(t[down] - h[up] >= 0)
        {
            cout << h[up] << "\n";
            up++;
            down++;
        }
        else if (t[down] - h[up] < 0)
        {
            up++;
        }
    }
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