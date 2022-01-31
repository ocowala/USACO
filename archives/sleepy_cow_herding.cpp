#include <bits/stdc++.h>
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n";
using namespace std;
const int MN=1e5+10;
void setIO(string str){
	if((int)str.size()==0){
		ios_base::sync_with_stdio(false);cin.tie(nullptr);
	}
	else{
		ios_base::sync_with_stdio(false);cin.tie(nullptr);
		freopen((str+".in").c_str(),"r",stdin);
		freopen((str+".out").c_str(),"w",stdout);
	}
}
int main(){
    //setIO("herding");
    vector<int> a(3); for(int i=0; i<3; ++i) cin >> a[i];
    sort(a.begin(),a.end());
    if(a[0]==a[2]-2){
        cout << 0 << "\n";
    }
    else if((a[1]==a[2]-2)||(a[0]==a[1]-2)){
        cout << 1 << "\n";
    }
    else{
        cout << 2 << "\n";
    }
    cout << max(a[2]-a[1],a[1]-a[0])-1 << "\n";
    return 0;
}