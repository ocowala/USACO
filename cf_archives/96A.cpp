#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	bool c=true;
	int ocnt=0,acnt=0;
	for(int i = 0;i < s.length(); ++i){
		if(s[i]=='1'){
			ocnt=0;
			++acnt;
		}
		if(s[i]=='0'){
			acnt=0;
			++ocnt;
		}
		if(ocnt>=7||acnt>=7){
			c=false;
			break;
		}
	}
	if(c) cout<<"NO\n";
	else cout<<"YES";
	return 0;
}
