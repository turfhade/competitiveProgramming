#include <bits/stdc++.h>

using namespace std;
using ll = long long;


void solve()
{
    ll R1,X1,Y1,R2,X2,Y2;
    while (cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2)
    {
        string state = "MORTO";

        ll a1 =abs(Y1-Y2);
        ll a2 =abs(X1-X2);
        double a3 = sqrt(pow(a1,2) + pow(a2,2));
        if(R1 >= R2 + a3 && R1>=R2)
        {
            state = "RICO";
        }
        cout << state << "\n";
    }

}

int main()
{
    int n = 1;
    //cin >> n;
    while(n--)
    {
        solve();
    }
    return 0;
}