#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    ll L,C,R1,R2;
    
    while(true)
    {
    cin >> L,cin >> C;cin >> R1;cin >> R2;
    if(L==0 && C ==0 && R1==0 && R2==0)
    {
        break;
    }
    //cxheck if its a square before this maybe;
    ll aL = min(L,C);
    ll aC = max(L,C);

    ll aR1 = max(R1,R2);
    ll aR2 = min(R1,R2);

    ll c1L = aL-aR1;
    ll c1C = aR1;
    ll c2L = aR2;
    ll c2C = aC-aR2;

    ll bruhside = c1L - c2L;
    ll bruhvert = c2C - c1C;

    double crazy = sqrt(pow(bruhside,2)+pow(bruhvert,2));
    if(crazy >= aR1 + aR2 && R1*2 <= L && R1*2 <= C && R2*2 <= L && R2*2 <= C)
    {
        cout << "S" << "\n"; 
    }

    else
    {
        cout << "N" << "\n";
    }
}
return;
    }


int main()
{
    int n = 1;
    //cin >> n;
    while(n--)
    {
        solve();
    }
}