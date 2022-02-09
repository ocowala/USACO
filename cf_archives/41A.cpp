#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	string a,b;
	cin>>a>>b;
	reverse(a.begin(),a.end());
	cout<<(a==b?"YES":"NO");
	return 0;
}
