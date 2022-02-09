#include <bits/stdc++.h>
using namespace std;
//incomplete
int main(){
	string str1,str2;
	cin>>str1>>str2;
	transform(str1.begin(), str1.end(), str1.begin(), ::tolower); 
	transform(str2.begin(), str2.end(), str2.begin(), ::tolower); 
	int cnt1=0,cnt2=0;
	for(int i = 0; i < str1.length(); ++i){
		cnt1+=str1[i];
		cnt2+=str2[i];
	}
	if(cnt1<cnt2)
		cout<<-1;
	else if(cnt1>cnt2)
		cout<<1;
	else
		cout<<0;
	return 0;
}