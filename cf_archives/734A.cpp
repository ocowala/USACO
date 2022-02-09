#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,d=0,a=0;
	cin>>n;
	for(int i = 0; i < n; ++i){
		char s;
		cin>>s;
		if(s=='D'){
			++d;
		}
		else{
			++a;
		}
	}
	if(d>a) cout<<"Danik";
	else if(a>d) cout<<"Anton";
	else cout<<"Friendship";
	return 0;
}