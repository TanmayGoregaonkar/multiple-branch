#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    bool flag=true;
    while (n > 10)
    {
        n=n%10;
        if (n!=7 || n!=4)
        {
            flag=false;
            break;
        }
        else
        {
            n=n/10;
        }
        
    }
    if (flag)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    

    return 0;
}