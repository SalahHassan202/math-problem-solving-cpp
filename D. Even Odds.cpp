// D. Even Odds

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll cnt = (n + 1) / 2; // odd counter
    if (k <= cnt)
    {
        cout << 1 + (k - 1) * 2 << endl;
    }
    else
    {
        ll pos = k - cnt;
        cout << pos * 2 << endl;
    }

    // n = 10
    // cnt = 5  (1 3 5 7 9)
    // k = 3 ≤ 5 → odd
    // answer = 1 + (3-1)*2 = 5
    //================================
    // n = 7
    // cnt = 4  (1 3 5 7)
    // k = 7 > 4 → even
    // pos = 7-4 = 3
    // answer = 2*3 = 6
}

int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}