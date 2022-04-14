#include <bits/stdc++.h>
using namespace std;
void setIO(string str){
	if((int) str.size() > 0) freopen((str+".in").c_str(),"r",stdin),freopen((str+".out").c_str(),"w",stdout);
	cin.tie(nullptr);ios_base::sync_with_stdio(false);cin.exceptions(ios_base::failbit);
}
int N;
vector<int> l,g; 
int main(){
	setIO("");
    cin >> N;
    for(int i = 0; i < N; i++){
        char c; int x; cin >> c >> x;
        if(c=='L') l.push_back(x);
        else g.push_back(x);
    }
    int ans = 0;
    sort(l.begin(),l.end());sort(g.begin(),g.end());
    if((int) l.size() > (int) g.size()){
        int lowest_l = l[(int) l.size()-1];
        for(int i = 0; i < (int) g.size(); i++){
            if(g[i] > lowest_l){
                ++ans;  
            }
        }
        cout << ans << "\n";
        return 0;
    }
    int lowest_g=g[(int) g.size()-1];
    for(int i = 0; i < (int) l.size(); ++i){
        if(l[i] < lowest_g){
            ++ans;
        }
    }
    cout << ans << "\n";
	return 0;
}