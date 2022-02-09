#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	set<char> s;
	for(int i = 0; i < str.length(); ++i){
		s.insert(str[i]);
	}
	cout<<(s.size()%2==0?"CHAT WITH HER!":"IGNORE HIM!");
	return 0;
}