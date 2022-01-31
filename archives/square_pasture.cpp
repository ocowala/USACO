#include <iostream>
// for some reason it wasnt working with bits/stdc++.h
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n";
using namespace std;
void setIO(string str){
	freopen((str+".in").c_str(),"r",stdin);
	freopen((str+".out").c_str(),"w",stdout);
}
int main(){
    setIO("square");
	ios_base::sync_with_stdio(false);cin.tie(nullptr);	
    int x11,x12,y11,y12;
	int x21,x22,y21,y22;
	cin >> x11 >> y11 >> x12 >> y12;
	cin >> x21 >> y21 >> x22 >> y22; 
	int l = min(x11,x21);
	int r = max(x12,x22); 
	int u = min(y11,y21);
	int d = max(y12,y22);
	int side = max(r-l,d-u);
    cout<<side*side<<"\n";
    return 0;
}