#include <bits/stdc++.h>
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n";
using namespace std;
const int MOD=1000000007;
const int MX=100;
void setIO(string str){
	freopen((str+".in").c_str(),"r",stdin);
	freopen((str+".out").c_str(),"w",stdout);
}
int main(){
    setIO("speeding");
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int N,M;
    cin >> N >> M;
    int limit[MX],bessie[MX];
    int start=0;
    for(int i=0; i<N; ++i){
        int len,speed;
        cin >> len >> speed;
        for(int j=start; j< start+len; ++j){
            limit[j]=speed;
        }
        start+=len;
    }
    start=0;
    for(int i=0; i<M; ++i){
        int len,speed;
        cin >> len >> speed;
        for(int j=start; j<start+len; ++j){
            bessie[j]=speed;
        }
        start+=len;
    }
    int worst=0;
    for(int i=0; i<MX; ++i){
        worst=max(worst,bessie[i]-limit[i]);
    }
    cout << worst << "\n";
    return 0;  
}