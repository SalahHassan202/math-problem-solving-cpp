// H. Geometrical problem

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

bool salah(vector<ll> &v)
{
    ll n = v.size();
    if (n == 0)
    {
        return true;
    }
    if (n == 1)
    {
        return true;
    }
    if (v[0] == 0)
    {
        for (ll i = 1; i < n; i++)
        {
            if (v[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
    if (n == 2)
    {
        return true;
    }
    for (ll i = 2; i < n; i++)
    {
        if (v[i] * v[i - 2] != v[i - 1] * v[i - 1])
        {
            return false;
        }
        if (v[i - 1] == 0 && v[i] != 0)
        {
            return false;
        }
    }
    return true;
}

bool func(vector<ll> &v, ll idx)
{
    vector<ll> t;
    for (ll i = 0; i < (ll)v.size(); i++)
    {
        if (i == idx)
        {
            continue;
        }
        t.push_back(v[i]);
    }
    return salah(t);
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v1(n);
    for (auto &x : v1)
    {
        cin >> x;
    }
    if (salah(v1))
    {
        cout << 0 << endl;
        return;
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (func(v1, 0) || func(v1, 1) || func(v1, n - 1))
    {
        cout << 1 << endl;
        return;
    }

    for (ll i = 2; i < n; i++)
    {
        if (v1[i] * v1[i - 2] != v1[i - 1] * v1[i - 1] || (v1[i - 1] == 0 && v1[i] != 0))
        {
            if (func(v1, i) || func(v1, i - 1) || func(v1, i - 2))
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
            return;
        }
    }
    cout << 2 << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}