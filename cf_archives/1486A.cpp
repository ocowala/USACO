#include <bits/stdc++.h>
using namespace std;
void solve(int a[],int N){
	long long sum=0,need=0;
	for(int i = 0;i < N; ++i){
		need+=i;
		sum+=a[i];
		if(sum<need){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		int a[N];
		for(int i = 0;i < N; ++i){
			cin>>a[i];
		}
		solve(a,N);
	}
	return 0;
}
