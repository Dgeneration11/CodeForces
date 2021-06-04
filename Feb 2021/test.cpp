#include <bits/stdc++.h>
using namespace std;

 
void solve(){
	int n;cin>>n;string s;cin>>s;
	reverse(s.begin(), s.end());
	int count=0;
	for(int i=0;s[i];i++){
		if(s[i] == ')') count++;
		else break; 
	}
	// cout<<count<<"\n";
	if(count>s.size()-count) cout<<"YES\n";
	else cout<<"NO\n";
}

int main() {
    int t;cin>>t;
	while(t--){
		solve();
	}
    return 0;
}