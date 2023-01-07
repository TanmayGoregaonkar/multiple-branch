#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s1 = "I hate";
    string s2 = "I love";
    if (n == 1)
    {
        cout << "I hate";
    }
    else
        for (int i = 1; i <= n; i++)
        {

            if (i & 1)
            {
                cout << s1;
            }
            else
            {
                cout << s2;
            }
            if (i != n)
            {
                cout << " that ";
            }
        }
    cout << " it\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}