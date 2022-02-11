#include <bits/stdc++.h>
#define dbg(...) cerr << #__VA_ARGS__ << ":" << __VA_ARGS__ << "\n";
#define i64 int64_t
using namespace std;
const int MOD=1000000007,MAX_N=2e5;
void setIO(string str){
    freopen((str+".in").c_str(),"r",stdin);
    freopen((str+".out").c_str(),"w",stdout);
}
int main(){
    //setIO("");
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cin.exceptions(ios_base::failbit);
    string s;
    getline(cin,s);
    int ans=0;
    set<int> st;
    for(int i=0; i<(int)s.size(); ++i){
        if(s[i]-'a'>=0 && s[i]-'a'<26){
            st.insert(s[i]);
        }
    }
    cout << st.size() << "\n";
    return 0;  
}