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
void cinarr(vector<T> &a)
{
    for (auto &x : a)
        cin >> x;
}
template <typename T>
void coutarr(vector<T> &a)
{
	for (auto &x : a)
	{
		cout << x;
		cout << " ";

	}
	cout << "\n";
}
    /* if ez:
    ll n;
    cin >> n;
    vll arr(n);
    read(arr);
   */
void solve()
{
  /*

	5-
	
	6-
	5 3 6 1 4 2
	1 3 5 2 4 6
	7-
	1 3 5 7 4 6 2
	7 2 5 1 4 6 4
	4 7 2 6 3 5 1 fast

	8
	1 2 3 4 5 6 7 8
	5 8 2 7 3 6 4 1 fast O(n + n):?
   *///i  3
	//7
	//1 7 2 6 3 5 4
	ll n;cin >> n;
	vll arr(n);
	ll c1=1;
	ll c2=n;
	bool even=true;
	for(ll i = 0; i < n; i++)
	{
		if(even==true)
		{
			arr[i]=c1;
			c1++;
			even=false;
		}
		else if(even==false)
		{
			arr[i] = c2;
			c2--;
			even=true;
		}
	}
	//1 7 2 6 3 5 4
	//2 4 1 3
	bool solved=false;
	if(arr[n-1] == arr[n-2]) solved=true;
			if(arr.size() == 1){cout << "1\n";return;};
	if(arr.size() < 4){cout << "NO SOLUTION\n";return;};

	for(ll i = 0; i < n;i++)
	{
		if(i == 0)
		{
			if(abs(arr[i+1] - arr[n-1]) > 1)
			{
				swap(arr[n-1],arr[i]);
				solved=true;
				break;
			}
		}
		else if(abs(arr[n-1]-arr[i-1]) > 1 && abs(arr[n-1]-arr[i+1]) > 1)
		{
			swap(arr[n-1],arr[i]);
			solved=true;
			break;
		};;;
		
	}
	if (solved == false)
	{

	for(ll i = 0; i < n;i++)
	{
		if(i == 0)
		{
			if(abs(arr[i+1] - arr[n-2]) > 1)
			{
				swap(arr[n-2],arr[i]);
				solved=true;
				break;
			}
		}
		else if(abs(arr[n-2]-arr[i-1]) > 1 && abs(arr[n-1]-arr[i+1]) > 1)
		{
			swap(arr[n-2],arr[i]);
			solved=true;
			break;
		};;;
	}

	}
	if(solved==true) coutarr(arr); else {cout << "NO SOLUTION\n";}
	msg("wassup g");
	dend;
	dend;
	return;
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

