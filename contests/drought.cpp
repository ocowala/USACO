#include <bits/stdc++.h>
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n";
using namespace std;
int T;
void solve(){
    int N;
    cin >> N;
    vector<long long> h(N); for(int i=0; i<N; ++i) cin >> h[i];
    if(N%3==0){
        int ans=0;
        while(!h.empty()){
            int dist_2_1=h[1]-h[0];
            dbg(dist_2_1);
            // 1 - 3
            int dist_3_1=h[1]-h[2];
            dbg(dist_3_1);
            if(dist_2_1<=0&&dist_3_1<=0){
                cout << -1 << "\n";
                return;
            }
            else{
                if(dist_2_1==dist_3_1){
                    cout << -1 << "\n";
                    return;
                }
                else if(dist_2_1+dist_3_1==h[1]){
                    cout << -1 << "\n";
                    return;
                }
                else if(dist_3_1>=h[0]||dist_2_1>=h[2]){
                    cout << -1 << "\n";
                    return;
                }
                else{
                    ans+=2*(dist_2_1+dist_3_1);
                    if(!h.empty()){
                    h.erase(h.begin(),h.begin()+2);
                    }
                }
            }
            
        }
        cout << ans << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
	//setIO("");
	cin >> T;
    for(int i=0;i<T; ++i){
        solve();
    }
    return 0;
}