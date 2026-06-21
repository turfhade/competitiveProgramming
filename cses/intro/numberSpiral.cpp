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
    ll y,z;
    cin >>y;cin >> z;
    /* hint given:
        1 1-1
        4 2-1
        9 1-3
        16 4-1
        25 1-5
        end of hint
        ez operations -> x=y is even, x=z is odd
        complicated:
        like 5,1 how to reach that, maybe
        5,1 = 4,1 + min
        so 5,3 is 4,1 + 3
        what about
        1, 4 ?
        ik that 1,3 is 9
        9+min = 10 correct
        so hypothesis is whatever that complicated is
        x is max(x,y) scenarios:
        x = y and x even then ez max² - (min-1)
        x = z and x even
        x = y and x odd
        x = z and x odd then ez

     */
    if(max(y,z) == y && y % 2==0)
    {
        cout << y*y - (z-1) << "\n";
    }
    else if(max(y,z) == z && z % 2 == 1)
    {
        cout << z*z - (y-1) << "\n";
    }
    else if(max(y,z) == y && y % 2==1)
    {
        cout << (y-1)*(y-1) + z << "\n";
    }
    else if(max(y,z) == z && z % 2 == 0)
    {
        cout << (z-1)*(z-1) + y << "\n";
    }
    return;
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
