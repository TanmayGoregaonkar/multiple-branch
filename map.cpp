// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main()
// {
//     map<string,ll>mp;
//     ll n;
//     cin>>n;
//     string s;
//     for (ll i = 0; i < n; i++)
//     {
//         cin>>s;
//         mp[s]++;
//     }
//     for (auto i : mp)
//     {
//         cout<<i.first<<" "<<i.second<<endl;
//     }
    
    
//     return 0;
// }

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
map<int,int>mp;
for (ll i = 0; i < n; i++)
{
    cin>>a[i];
    mp[a[i]]++;
}
int ans;
for (auto it : mp)
{
    if (it.second > 2)
    {
        ans=it.first;
    }
    
}
cout<<ans<<endl;
 
return 0;
}