#include <bits/stdc++.h>
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n";
using namespace std;
const int MOD=1000000007;
const int MX=1e5+10;
void setIO(string str){
	freopen((str+".in").c_str(),"r",stdin);
	freopen((str+".out").c_str(),"w",stdout);
}
int T;
bool is_first_beat_second(int a[], int b[]){
    int a_cnt=0,b_cnt=0;
    for(int i=0; i<4; ++i){
        for(int j=0; j<4; ++j){
            if(b[j]<=a[i]){
                ++a_cnt;
            }
        }
    }
    for(int i=0; i<4; ++i){
        for(int j=0; j<4; ++j){
            if(b[i]>=a[j]){
                ++b_cnt;
            }
        }
    }
    // cout << a_cnt << "\n";
    // cout << b_cnt << "\n";
    return a_cnt>b_cnt;
}
void create_transitive_c(int a[], int b[]){
    int c[4];
    int cnt=0;
    for(int i=1; i<=10; ++i){
        c[0]=i;
        for(int j=1; j<=10; ++j){
            c[1]=j;
            for(int k=1; k<=10; ++k){
                c[2]=k;
                for(int l=1; l<=10; ++l){
                    c[3]=l;
                    if(is_first_beat_second(a,b)&&is_first_beat_second(b,c)&&is_first_beat_second(c,a)){
                        //cout << "YES!!!!: " << c[0] << " " << c[1] << " " << c[2] << " " << c[3] << "\n"; 
                        cout << "yes\n";
                        return;
                    }
                    else if(is_first_beat_second(b,a)&&is_first_beat_second(a,c)&&is_first_beat_second(c,b)){
                        cout << "yes\n";
                        return;
                    }
                }
            }
        }
    }
    cout << "no\n";
}
void solve(){
    int a[4],b[4],c[4];
    for(int i=0; i<4; ++i){
        cin >> a[i];
    }
    for(int i=0; i<4; ++i){
        cin >> b[i];
    }
    sort(a,a+4);
    sort(b,b+4);
    int a_cnt=0,b_cnt=0;
    create_transitive_c(a,b);
    
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