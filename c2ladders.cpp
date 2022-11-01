// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// void solve()
// {
//     ll n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int val=0;
//         ll ind1,ind2;
//         for(int i=0;i<n;i++){
//             if(s[i]=='Q'){
//                 val++;
//             }else{
//                 int temp=0;
//                 while(i<n && s[i]=='A'){
//                     temp++;
//                     i++;
//                 }
//                 i--;
//                 if(temp>=val){
//                     val=0;
//                 }else{
//                     val=val-temp;
//                 }
//             }
//         }
//         if(val>0)
//             cout<<"NO\n";
//         else
//             cout<<"YES\n";
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
 while (t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		int mx = v[0];
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] > mx)
				mx = v[i];
			sum += v[i];
		}
		cout << 1.0 * (sum - mx) / (n - 1) + mx << endl;
	}

 
return 0;
}