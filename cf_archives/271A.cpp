#include <bits/stdc++.h>
using namespace std;
int main(){
	int y;
	cin>>y;
	int i = y+1;
	while(i<=10000){
		set<int> s;
		int j=i;
		while(j!=0){
			s.insert(j%10);
			j/=10;
		}
		if(s.size()==4){
			cout<<i;
			break;
		}
		++i;
	}
	return 0;
}