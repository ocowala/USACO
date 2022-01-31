#include <bits/stdc++.h>
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n";
using namespace std;
const int MN=1e5+10;
int N;
void setIO(string str){
	if((int)str.size()==0){
		ios_base::sync_with_stdio(false);cin.tie(nullptr);
	}
	else{
		ios_base::sync_with_stdio(false);cin.tie(nullptr);
		freopen((str+".in").c_str(),"r",stdin);
		freopen((str+".out").c_str(),"w",stdout);
	}
}
int main(){
    //setIO("outofplace");
    int N,ans=0;
    cin >> N;
    vector<int> A(N),sorted(N); 
    for(int i=0; i<N; ++i){
        cin >> A[i];
        sorted[i]=A[i];
    }
    sort(sorted.begin(),sorted.end());
    for(int i=0; i<N; ++i){
        if(sorted[i]!=A[i]){
            ++ans;
        }
    }
    cout << ans << "\n";
    return 0;
}