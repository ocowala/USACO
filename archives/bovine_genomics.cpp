#include <bits/stdc++.h>
#define dbg(...) cerr << #__VA_ARGS__ << ":" << __VA_ARGS__ << "\n";
#define i64 int64_t
using namespace std;
const int MOD=1000000007;
const int MX=100;
void setIO(string str){freopen((str+".in").c_str(),"r",stdin);freopen((str+".out").c_str(),"w",stdout);}
int N,M;
bool spotty_not_plain(string spotty[], string plain[], int pos){
    string pseq="",seq="";
    for(int i=0; i<N; ++i){
        pseq+=plain[i][pos];
        seq+=spotty[i][pos];
    }
    for(int i=0; i<(int)seq.size(); ++i){
        for(int j=0; j<(int)pseq.size(); ++j){
            if(seq[i]==pseq[j]){
                return false;
            }
        }
    }
    return true;
    
}
int main(){
    //setIO("cownomics");
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    cin >> N >> M;
    string spotty[N],plain[N];
    for(int i=0; i<N; ++i) cin >> spotty[i];
    for(int i=0; i<N; ++i) cin >> plain[i];
    int cnt=0;
    for(int i=0; i<M; ++i){
        if(spotty_not_plain(spotty,plain,i)){
            ++cnt;
        }
    }
    cout << cnt << "\n";
    return 0;  
}