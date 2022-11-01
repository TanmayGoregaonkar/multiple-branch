#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n[10];
    vector<ll>v;
for (int i = 0; i < 10; i++)
{
    cin>>n[i];
    v.push_back(n[i]);
}
for (auto it : v)
{
    cout<<it;
}


    return 0;
}