#include <bits/stdc++.h>
#define dbg(...) cerr << #__VA_ARGS__ << ":" << __VA_ARGS__ << "\n"
using namespace std;
void setIO(string str){
    freopen((str+".in").c_str(),"r",stdin);
    freopen((str+".out").c_str(),"w",stdout);
}
int main(){
    //setIO("");
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int a[100];
    int N; cin >> N;
    for(int i=0; i<N; ++i) cin >> a[i];
    int ans=0;
    for(int i=0; i<N; ++i){
        for(int j=i; j<N; ++j){
            int tP=0;
            for(int k=i; k<=j; ++k){
                tP+=a[k];
            }
            for(int k=i; k<=j; ++k){
                if(a[k]*(j-i+1)==tP){
                    ++ans;
                    break;
                }
            }
        }
    }
    cout << ans << "\n";
    //cout << comb << "\n";
    return 0;
}