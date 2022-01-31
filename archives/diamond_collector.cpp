#include <bits/stdc++.h>
#define dbg(...) cerr << #__VA_ARGS__ << ":" << __VA_ARGS__ << "\n"
using namespace std;
void setIO(string str){
    freopen((str+".in").c_str(),"r",stdin);
    freopen((str+".out").c_str(),"w",stdout);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    setIO("diamond");
    int a[1000];
    int N,K;
    cin >> N; cin >> K; 
    int ans=0;
    for(int i=0;i<N; ++i) cin >> a[i];
    sort(a,a+N);
    for(int i=0; i<N; ++i){
        int cnt=1;
        for(int j=i+1; j<N; ++j){
            if(a[j]-a[i]<=K){
                ++cnt;
            }
            else break;
        }
        ans=max(cnt,ans);
    }   
    cout << ans << "\n";
    return 0;
}