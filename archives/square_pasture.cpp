#include <bits/stdc++.h>
using namespace std;
int p1[4],p2[4];
int main(){
	freopen("square.in","r",stdin);
	freopen("square.out","w",stdout);
	cin.tie(0)->sync_with_stdio(0);
	for(int i=0;i<4;i++) cin>>p1[i];
	for(int i=0;i<4;i++) cin>>p2[i];
	int left=min(p1[0],p2[0]);
	int right=max(p1[2],p2[2]);
	int bottom=min(p1[1],p2[1]);
	int up=max(p1[3],p2[3]);
	cout<<pow(max(right-left,up-bottom),2)<<"\n";
	return 0;
}