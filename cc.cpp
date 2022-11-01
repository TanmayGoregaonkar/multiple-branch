#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll x=(2*a[0])-1;

    for (int i = 0; i < n; i++)
    {
        ans+=(a[i]/x);
        if(a[i]%x==0){
            ans--;
        }
    }
    
    cout<<ans<<"\n";


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}