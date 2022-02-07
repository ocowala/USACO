#include <bits/stdc++.h>
#define dbg(...) cerr << #__VA_ARGS__ << ":" << __VA_ARGS__ << "\n";
#define i64 int64_t
using namespace std;
const int MOD=1000000007;
const int MAX_N=105;
void setIO(string str){freopen((str+".in").c_str(),"r",stdin);freopen((str+".out").c_str(),"w",stdout);}
int N;
int main(){
    //setIO("lifeguards");
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cin.exceptions(ios_base::failbit);
    cin >> N;
    vector<pair<int,int>> v;
    int numCover[1000]={0};
    for(int i=0; i<N; ++i){
        int a,b; cin >> a >> b;
        v.push_back({a,b});
        for (int j=a;j<b;++j) {
			++numCover[j];
		}
    }
    int covered=0;
    int maxCover=0;
    for(auto &i:v){
        for (int t=i.first;t<i.second;++t) {
			--numCover[t];
		}
		covered=0;
		for (int t=0;t<1000;++t) {
			if (numCover[t]>0) {
				covered++;
			}
		}
		for (int t=i.first;t<i.second;++t) {
			++numCover[t];
		}
		maxCover=max(covered,maxCover);
    }
    cout << maxCover << "\n";
    return 0;  
}