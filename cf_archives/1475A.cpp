#include <bits/stdc++.h>
using namespace std;
void solve(long long n){
	while(!(n & 1)){
		n >>= 1;
	}
	if(n==1){
		cout<<"NO\n";
	}
	else cout<<"YES\n";
}
int main(){
	int T;
	cin>>T;
	while(T--){
		long long n;
		cin>>n;
		solve(n);
	}
	return 0;
}
