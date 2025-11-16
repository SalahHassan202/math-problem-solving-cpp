// C. Tricky Sum

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll sum = (n * (n + 1)) / 2;
    ll p = 1, d = 0;
    while (p <= n)
    {
        d += p;
        p <<= 1;
    }
    cout << sum - 2 * d << endl;
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}