//bogus solution with 1294ms, try fixing it so that it would work faster
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int x,y;
	cin>>x>>y;
	for(int i=1;i<=y;i++){
		for(int j=1;j<=y/x;j++){
			if(x*pow(j,i)==y){
				cout<<i<<" "<<j<<"\n";
				return;
			}
		}
	}
	cout<<0<<" "<<0<<"\n";
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}
