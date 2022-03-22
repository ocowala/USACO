#include <bits/stdc++.h>
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n";
using namespace std;
const int MOD=1000000007;
const int MX=1e5+10;
void setIO(string s){
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}
int main(){
    //setIO("shell");
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int N;
    cin >> N;
    int d[]={0,1,2};
    int cnt[3]={0};
    for(int i=0; i<N; ++i){
        int a,b,g;
        cin >> a >> b >> g;
        --a,--b,--g;
        swap(d[a],d[b]);
        ++cnt[d[g]];
    }
    cout << max(cnt[0],max(cnt[1],cnt[2])) << "\n";
    return 0;
}
