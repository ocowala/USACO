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
    //setIO("cowsignal");
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int M,N,K;
    cin >> M >> N >> K;
    for(int i=0; i<M; ++i){
        string s;
        cin >> s;
        for(int l=0;l<K; ++l){
        for(int j=0; j<N; ++j){
            for(int k=0; k<K; ++k){
                cout << s[j];
            }
        }
        cout << "\n";
        }
    }
    return 0;
}