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
	//setIO("");
    int N;
    cin >> N;
    int o=0,e=0;
    vector<int> v(N); for(int i=0; i<N; ++i){
        cin >> v[i];
        if(v[i]%2==0) ++e;
        else ++o;
    }
    int cnt=0;
    while(e<o){
        o-=2; 
        ++e;
    }
    if(e>o+1){
        e=o+1;
    }
    cout << o+e << "\n";
    return 0;
}