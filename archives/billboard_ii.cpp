#include <bits/stdc++.h>
using namespace std;
int b1[4],b2[4],tr[4];
int area(int a[]){
	return abs(a[2]-a[0])*abs(a[3]-a[1]);
}
int intersection(int b[], int t[]){
	if(t[0]>=b[2]||t[2]<=b[0]||t[3]<=b[1]||t[1]>=b[3]) return 0;
	else{
		//cout<<(min(t[2],b[2])-max(b[0],t[0]))<<" "<<min(b[3],t[3])-max(t[1],b[1])<<"\n";
		return (min(t[2],b[2])-max(b[0],t[0]))*(min(b[3],t[3])-max(t[1],b[1]));
	}
}
int main(){
	freopen("billboard.in","r",stdin);
	freopen("billboard.out","w",stdout);
	cin.tie(0)->sync_with_stdio(0);
	for(int i=0;i<4;i++) cin>>b1[i];
	for(int i=0;i<4;i++) cin>>b2[i];
	for(int i=0;i<4;i++) cin>>tr[i];
	cout<<(area(b1)-intersection(b1,tr))+(area(b2)-intersection(b2,tr))<<"\n";
	return 0;
}