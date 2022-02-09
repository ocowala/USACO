#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0;
	cin>>n;
	while(n!=0){
		if(n-5>=0){
			n-=5;
		}
		else if(n-4>=0){
			n-=4;
		}
		else if(n-3>=0){
			n-=3;
		}
		else if(n-2>=0){
			n-=2;
		}
		else if(n-1>=0){
			n-=1;
		}
		++cnt;
	}
	cout<<cnt;
	/* math based solution
		int n;
		cin>>n;
		cout<<(x+4)/5;
	*/
	return 0;
}