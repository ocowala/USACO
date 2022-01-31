#include <bits/stdc++.h>
#define dbg(...) cerr << #__VA_ARGS__ << ":" << __VA_ARGS__ << "\n"
using namespace std;
void setIO(string str){
    freopen((str+".in").c_str(),"r",stdin);
    freopen((str+".out").c_str(),"w",stdout);
}
int N,K;
int a[10][20];
bool is_consistent(int c,int d){
    int cnt=1;
    for(int i=1; i<K; ++i){
        int idx_a=0,idx_b=0;
        for(int j=0; j<N; ++j){
            if(a[i][j]==c){
                idx_a=j;
            }
            else if(a[i][j]==d){
                idx_b=j;
            }
        }
        if(idx_a<idx_b){
            ++cnt;
        }
        else{
            
        }
    }
    return cnt==K;
}
int main(){
    //setIO("gymnastics");
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    cin >> K >> N;
    for(int i=0; i<K; ++i)
        for(int j=0; j<N; ++j)
            cin >> a[i][j];
    int ans=0;
    for(int i=0; i<N-1; ++i){
        for(int j=i+1; j<N; ++j){
            if(is_consistent(a[0][i],a[0][j])){
                ++ans;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}