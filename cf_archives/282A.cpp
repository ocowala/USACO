#include <bits/stdc++.h>
using namespace std;
int main(){
	int T,x=0;
	cin>>T;
	for(int i = 0; i < T; ++i){
		string s;
		cin>>s;
		if(s=="++X"||s=="X++"){
			++x;
		}
		else if(s=="--X"||s=="X--"){
			--x;
		}
	}
	cout<<x;
	return 0;
}