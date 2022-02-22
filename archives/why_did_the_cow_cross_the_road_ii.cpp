#include <bits/stdc++.h>
using namespace std;
#define io(...) freopen((string(__VA_ARGS__)+".in").c_str(),"r",stdin);freopen(((string(__VA_ARGS__)+".out")).c_str(),"w",stdout);
string s;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin >> s;
	int start[26],end[26];
	fill(start,start+26,-1),fill(end,end+26,-1);
	for(int i=0; i<s.size(); ++i){
		if(start[s[i]-'A']==-1) start[s[i]-'A']=i;
		else end[s[i]-'A']=i;
	}
	int ans=0;
	for(int i=0; i<26; ++i){
		for(int j=0; j<26; ++j){
			ans+=start[i]<start[j]&&start[j]<end[i]&&end[i]<end[j];
		}
	}
	cout << ans << "\n";
	return 0;	
}
