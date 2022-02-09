//A 
#include <bits/stdc++.h>
using namespace std; 
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n"
void solve(){
    string s;
    cin>>s;
    if(s.size()<=2){
        cout<<s<<"\n";
        return;
    }
    else{
        unordered_map<char,int> m;
        for(int i=0;i<s.size();++i){
            ++m[s[i]];
        }
        string ans="";
        for(auto &p:m){
            if(p.second==2){
                ans+=p.first;
                ans+=p.first;
            }
            else{
                ans+=p.first;
            }
        }
        cout<<ans<<"\n";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}