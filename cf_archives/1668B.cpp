#include <bits/stdc++.h>
#define dbg(...) cerr << #__VA_ARGS__ << ":" << __VA_ARGS__ << "\n"
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
	long long ans = n;
	sort(a, a+n); 
	for(int i = 1; i < n; i++){
		ans += max(a[i],a[i-1]);
	}
	ans += max(a[n-1],a[0]);
	//cout << ans << "\n";
	if(ans>m) cout << "NO\n";
	else cout << "YES\n";
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