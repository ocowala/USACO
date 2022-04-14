#include <bits/stdc++.h>
using namespace std;
void setIO(string str){
	if((int) str.size() > 0) freopen((str+".in").c_str(),"r",stdin),freopen((str+".out").c_str(),"w",stdout);
	cin.tie(nullptr);ios_base::sync_with_stdio(false);cin.exceptions(ios_base::failbit);
}
int N; 
bool l_ans(int n,vector<int> l, vector<int> g){
    int conf = 0, den = 0;
    for(int i = 0; i < (int) g.size(); i++){
        if(l[n] >= g[i]){
            ++conf;
        }
        else{
            ++den;
        }
    }
    return conf >= den;
}
bool g_ans(int n,vector<int> l, vector<int> g){
    int conf = 0, den = 0;
    for(int i = 0; i < (int) l.size(); i++){
        if(n <= l[i]){
            ++conf;
        }
        else{
            ++den;
        }
    }
    return conf >= den;
}
int main(){
    vector<int> l;
    vector<int> g;
    cin >> N; 
    for(int i = 0; i < N; i++){
        char c; int x; cin >> c >> x; 
        if(c=='L'){
            l.push_back(x);
        }
        else{
            g.push_back(x);
        }
    }
    //for(int i = 0; i < l.size(); i++) cout << "l[i]: " << l[i] << " ";
    //cout << "\n";
    //for(int i = 0; i < g.size(); i++) cout << "g[i]: " << g[i] << " ";
    sort(l.begin(),l.end());sort(g.begin(),g.end());
    int ans = 0;
    //cout << "\n";
    for(int i = (int) l.size() - 1; i >= 0; i--){
        //cout << i << "\n";
        if(!l_ans(i,l,g)){
            //cout << "print l[i]: " << l[i] << "\n";
            ++ans;
        }
    }
    //cout << ans << "\n";
    for(int i = 0; i < (int) g.size(); i++){
        if(!g_ans(i,l,g)){
            ++ans;
        }
    }
    cout << ans << "\n";
    return 0;
}