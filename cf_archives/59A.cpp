#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int ucnt=0,lcnt=0;
	for(int i = 0; i < str.length(); ++i){
		if(str[i]>=65&&str[i]<=90){
			++ucnt;
		}
		else{
			++lcnt;
		}
	}
	if(ucnt>lcnt) transform(str.begin(), str.end(), str.begin(), ::toupper); 
	else transform(str.begin(),str.end(),str.begin(),::tolower);
	cout<<str;
	return 0;
}