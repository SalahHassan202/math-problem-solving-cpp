// A. Sum of Range

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll a , b , sum = 0 ;       
    cin >> a >> b ;
    ll mn = min(a , b) , mx = max(a , b) ;
    
    // 1 ===> 7   ==> sum  (mx * (mx+1)) /2 
    // 5 ===> 7   ===> sum from 1 to 4    ==> (((min-1) * (min) )/ 2)
    // sum from a to b ;
    ll res= ((mx * (mx+1))/2) - (((mn -1) * ((mn -1)+1)) / 2) ;      // o(1)
    cout << res << endl; 

    // sum of even number from 1 to n ===> (n/2) * ((n/2) +1)

    ll even =((mx/2) * ((mx/2)+1)) - ((mn-1)/2)*(((mn-1)/2)+1) ;     // o(1)
    cout << even << endl;

    // sum of odd number from 1 to n ===> ((n+1)/2)^2
    ll odd = (((mx+1)/2)*((mx+1)/2)) - (((mn)/2)*(((mn)/2))) ;        // o(1)
    cout << odd << endl;
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
