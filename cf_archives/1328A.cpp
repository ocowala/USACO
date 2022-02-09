#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i = 0; i < t; ++i){
		int a,b,cnt=0;
		cin>>a>>b;
		//easier solution O_O if(a%b==0)cout<<0<<'\n'; else cout<<b-a%b<<'\n';
		if(a%b==0){
			cout<<0<<'\n';
		}
		else
			cout<<b*((a/b)+1)-a<<'\n';
		}
	return 0;
}