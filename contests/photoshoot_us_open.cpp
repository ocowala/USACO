#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>s;
	int ans=0;
	string a="";
	bool flag=0;
	for(int i=0;i<n-1;i+=2){
		 if(s[i]==s[i+1]){
			 a+="."; 
			 flag=1;
		 }
		 else if(s[i]=='G'&&s[i+1]=='H') a+="B";
		 else if(s[i]=='H'&&s[i+1]=='G') a+="A";
	}
	cout<<"After conversion:"<<a<<"\n";
	if(flag){
		a.erase(remove(a.begin(), a.end(), '.'), a.end());
	}
	//condense all consecutive occurences of the same character
 	char k=a[0];
	string b="";
	b+=k;
	for(int i=0;i<(int)a.size();++i){
		 if(a[i]!=k&&i>0){	
			 k=a[i];
			 b+=k;
		 }
	}
	if(b[(int)b.size()-1]=='A'){
		 ++ans;
		b=b.substr(0,(int)b.size()-1);
	}
	cout<<(int)b.size()<<"\n";

	return 0;
}
