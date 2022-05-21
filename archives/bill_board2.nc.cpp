#include <bits/stdc++.h>
// TODO: TMRW GOING TO FINISH THIS PROBLEM ONCE & FOR ALL
using namespace std;
int b1[4],b2[4];
int area(int a[]){
	return abs(a[2]-a[0])*abs(a[3]-a[1]);
}
int intersection(int a[], int b[]){
	//bottom-left corner
	if(a[3]>=b[1]&&a[1]<=b[1]&&a[0]<=b[0]){
		//cout<<"blcorner\n";
		return area(a);
		}
	//bottom-right corner
	if(a[3]>=b[1]&&a[1]<=b[1]&&a[0]>=b[0]){
		//cout<<"brcorner\n";
		return area(a);
	}
	//upper-left corner
	if(a[1]<=b[3]&&a[0]<=b[0]&&a[3]>=b[3]&&a[2]<=b[2]){
		//cout<<"ulcorner\n";
		return area(a);
	}
	//upper-right corner
	if(a[1]<=b[3]&&a[0]<=b[2]&&a[2]>=b[2]&&a[3]>=b[3]){
		//cout<<"rlcorner\n";
		return area(a);
	}
	if(b[0]>=a[2]||b[2]<=a[0]||b[3]<=a[1]||b[1]>=a[3]){
		//cout<<"lazy\n";
		return area(a);
	}
	else{
		return area(a)-(min(b[2],a[2])-max(a[0],b[0]))*(min(a[3],b[3])-max(b[1],a[1]));
	}
}
int main(){
	//freopen("billboard.in","r",stdin);
	//freopen("billboard.out","w",stdout);
	cin.tie(0)->sync_with_stdio(0);
	for(int i=0;i<4;i++) cin>>b1[i];
	for(int i=0;i<4;i++) cin>>b2[i];
	cout<<intersection(b1,b2)<<"\n";
	return 0;
}
