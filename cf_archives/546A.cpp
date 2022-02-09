#include <bits/stdc++.h>
using namespace std;
int main(){
	int k,n,w,amt=0;
	cin>>k>>n>>w;
	for(int i = 1; i <= w; ++i){
		amt+=i*k;
	}
	cout<<max(0,amt-n);	
	return 0;
}