// B. Calculating Function

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n ;    cin >> n ;
    
    if(n % 2 == 0)
    {
        cout << n /2 << endl;
        // n = 4
        // −1+2−3+4=2
        // والنتيجة 
        // n/2=2
   
    }
    else
    {
        cout<< -1 *( (n+1)/ 2) << endl;
        //n=5
        // −1+2−3+4−5=−3
        // والنتيجة 
        // −(5+1)/2=−3

    }

  }

int main()
{
    fast;
    ll t = 1 ;
    // cin >> t ;
    while(t--)
    {
       solve();
    }
   
    return 0;
}
