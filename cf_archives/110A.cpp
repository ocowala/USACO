#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,cnt=0;
	cin>>n;
	while(n!=0){
		if(n%10==7||n%10==4){
			++cnt;
		}	
		n/=10;
	}
	cout<<(cnt==7||cnt==4?"YES":"NO");
	return 0;
}