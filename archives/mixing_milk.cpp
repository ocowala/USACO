#include <bits/stdc++.h>
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n";
using namespace std;
const int MOD=1000000007;
const int MX=1e5+10;
void setIO(string str){
	freopen((str+".in").c_str(),"r",stdin);
	freopen((str+".out").c_str(),"w",stdout);
}
int main(){
    setIO("mixmilk");
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int c[3],m[3];
    for(int i=0; i<3; ++i){
        cin >> c[i] >> m[i];
    }
    for(int i=0; i<100; ++i){
        int amt=min(m[i%3],c[(i+1)%3]-m[(i+1)%3]);
        m[i%3]-=amt;
        m[(i+1)%3]+=amt;
    }
    for(int i=0; i<3; ++i){
        cout << m[i] <<  "\n";
    }
    return 0;
}