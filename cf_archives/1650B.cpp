#include <bits/stdc++.h>
using namespace std;
void solve(){
	int l,r,a;
	cin>>l>>r>>a;
	int ans=r/a+r%a;
	int m=r/a*a-1;
	if(m>=l) ans=max(ans,m/a+m%a);
	cout<<ans<<"\n";
}
int main(){
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}