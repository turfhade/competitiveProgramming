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
  string n;
  cin >> n;
  ll max = 0;
  if (n != "") {
    ll max = 1;
  } else {
    cout << 0 << "\n";
    return;
  }
  ll biggest = 1;
  for (int i = 0; i < n.size(); i++) {
    if (i + 1 != n.size()) {
      if (n[i] == n[i + 1]) {
        max++;
        if (max > biggest) {
          biggest = max;
        }
      } else {
        if (max > biggest) {
          biggest = max;
        }
        max = 1;
      }
    }
  }
  cout << biggest << "\n";
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
