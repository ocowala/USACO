#include <bits/stdc++.h>
using namespace std;
#define io(...) freopen((string(__VA_ARGS__)+".in").c_str(),"r",stdin);freopen(((string(__VA_ARGS__)+".out")).c_str(),"w",stdout);
int main(){
	//io("whereami");
	cin.tie(0)->sync_with_stdio(0),cin.exceptions(ios_base::failbit);
	int N; cin >> N;
	string s; cin >> s;
	int K=N;
	int ans=0;
	int mx=0;
	for(int j=K; j>=0; --j){
		map<string,int> mp;
		for(int i=0,p=0; i<=N-K; ++i,++p){
			mp.insert({s.substr(i,i+K-p),0});
		}
		for(int i=0,p=0; i<=N-K; ++i,++p){
			++mp[s.substr(i,i+K-p)];
			//cout << s.substr(i,i+K-p) << " ";
		}
		int cur=0;
		for(auto&i:mp){
			if(i.second==1){
				//cout << i.first << " ";
				++cur;
			}
		}
		if(cur>=mx){
			mx=cur;
			ans=K;
		}
		//cout << "\n";
		--K;
	}
	cout << ans << "\n";
	return 0;	
}