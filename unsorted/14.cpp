#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <utility>
#include <iterator>
using namespace std;
#ifdef LOCAL
#define dbg(x) cerr << #x << "->" << (x) << " "
#define msg(x) cerr << ">> " << x << " "
#define dend cerr << endl
#else
#define dbg(x)
#define msg(x)
#define dend
#endif
typedef long long ll;
typedef vector<ll> vll;
const int MOD = 1e9 + 7;
const int INF = 1e9;
template <typename T>
void cinarr(vector<T> &a)
{
    for (auto &x : a)
        cin >> x;
}
template<typename T>
void coutarr(vector<T> &a)
{
    for(auto &x : a)
        cout << x;
}
void solve()
{
    //cursor
    cout << "test" << "\n";
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
