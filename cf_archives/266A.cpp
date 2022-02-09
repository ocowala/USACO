#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,g=0,b=0,r=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i = 0; i < n; ++i){
		if(s[i-1]==s[i]){
			if(s[i]=='R'){
				++r;
			}
			else if(s[i]=='G'){
				++g;
			}
			else if(s[i]=='B'){
				++b;
			}
		}
	}
	cout<<r+g+b;
	return 0;
}