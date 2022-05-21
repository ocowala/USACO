#include <bits/stdc++.h>
#define dbg(...) cerr << #__VA_ARGS__ << ":" << __VA_ARGS__ << "\n"
using namespace std;
void solve(){
	int n,cnt = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = n-2; i >= 0; i--){
		if(a[i] >= a[i+1]){
			while(a[i] >= a[i+1] && a[i] > 0){
				a[i] /= 2;
				++cnt;
			}
			if(a[i] == a[i+1]){
				cout << -1 << "\n";
				return;
			}
		}
	}
	cout << cnt << "\n";
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		solve();	
	}
	return 0;
}
