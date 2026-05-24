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

void solve() {
  ll a, b;
  cin >> a;
  cin >> b;

  ll aa = min(a, b);
  ll bb = max(a, b);
  if (a == b) {
    cout << aa << "\n";
    return;
  }
  if (a == 0 || b == 0) {
    cout << 0 << "\n";
    return;
  }

  ll maxcommondivisor = 0;
  for (ll i = 0; i <= aa; i++) {
    if (i != 0 && bb % i == 0 && aa % i == 0) {
      if (i > maxcommondivisor) {
        maxcommondivisor = i;
      }
    }
  }
  cout << maxcommondivisor << "\n";
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  // cin >> t;
  while (t--)
    solve();

  return 0;
}
