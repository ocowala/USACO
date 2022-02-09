#include <bits/stdc++.h>
using namespace std;
void solve(string str, int n){
	if(n<=2){
		cout<<"YES"<<'\n';
		return;
	}
	else{
		bool c=true;
		set<char> s;
		char k=str[0];
		for(int i = 1;i <= n; ++i){
			if(k!=str[i]){
				for(auto j = s.begin();j != s.end(); ++j){
					if(*j==str[i]){
						c=false;
						k=str[i];
					}
				}
				k=str[i];
				s.insert(str[i-1]);
			}
			else if(k!=str[i]){
				k=str[i];
				s.insert(str[i-1]);
			}
		}
		if(c) cout<<"YES\n";
		else cout<<"NO\n";
		//for(auto i=s.begin();i !=s.end(); ++i){
		//	cout<<"set: "<<*i<<'\n';
		//}
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		solve(s,n);
	}
	return 0;
}
