#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,cnt=0;
	cin>>n>>k;
	int a[10000];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i]>=a[k-1]&&a[i]>0){
			++cnt;
		}
	}
	cout<<cnt;
	string s = "Hello World";
	for(int i = 0; i < s.length(); i++){
		cout<<"Hello World\n";
	}
	return 0;
}
