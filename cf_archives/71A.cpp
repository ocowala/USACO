#include <bits/stdc++.h>
#include <string>
using namespace std;
void solve(string s){
	string final="";
	if(s.length()>10){
		int cnt=0;
		final+=s[0];
		for(int i = 1; i < s.length()-1; ++i){
			++cnt;
		}
		final+=to_string(cnt);
		final+=s[s.length()-1];
	}
	else{
		final=s;
	}
	cout<<final<<'\n';
}
int main(){
	int T;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		solve(s);
	}
	return 0;
}

