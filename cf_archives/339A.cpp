#include <bits/stdc++.h>
using namespace std;
int main(){
	string s,tmp="";
	cin>>s;
	vector<int> v;
	int j=0;
	for(int i = 0; i < s.length(); i+=2){
		v.push_back(s[i]-48);
	}
	sort(v.begin(),v.end());
	for(int i = 0; i < v.size()-1; ++i){
		tmp+=to_string(v[i]);
		tmp+="+";
	}
	tmp+=to_string(v[v.size()-1]);
	cout<<tmp;
	return 0;
}