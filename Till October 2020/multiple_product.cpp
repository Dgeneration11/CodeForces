#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
 
		vector<ll> v(n);
		for(ll i = 0; i < n; i++)
			cin >> v[i];
 
		sort(v.begin(), v.end(), greater<int>());
 
		ll mul = 1;
		vector<ll> val(5);
		for(ll i = 0; i < 5; i++)
		{
			mul = mul * v[i];
			val[i] = mul;
		}
 
		mul = 1;
		ll ival2, ival4;
		ival2 = v[n - 1] * v[n - 2];
		ival4 = ival2 * v[n - 3]  * v[n - 4];
 
		cout << max(val[4], max(val[2] * ival2, val[0] * ival4)) << endl;
	}
}