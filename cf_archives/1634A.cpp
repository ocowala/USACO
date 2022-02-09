#include <bits/stdc++.h>
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n";
using namespace std;
set<string> a;
string rev(string s){
    string t;
    for(int i=s.size()-1;i>=0; --i){
        t+=s[i];
    }
    return t;
}
string op1(string s){
    string t=s+rev(s);
    return t;
}
string op2(string s){
    string t=rev(s)+s;
	return t;
}
void recurse(string s,int i, int k){
    string s1=op1(s),s2=op2(s);
    if(i==k-1||s1==s2){
        //dbg(s1);
        //dbg(s2);
        a.insert(s1),a.insert(s2);
        //cout << "recursion is done\n";
        return;
    }
    ++i;
    //s1=op1(s),s2=op2(s);
    // a.insert(s1);
    // a.insert(s2);
    recurse(s1,i,k);
    recurse(s2,i,k);
}
void solve(){
    int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
    //cout << "begin recurse\n";
    if(k==0){
        cout << 1 << "\n";
    }
    else{
        recurse(s,0,k);
        cout << a.size() << "\n";
        a.clear();
    }

    //cout << "end recurse\n";
    //for(auto &i:a) cout << i << " ";
    //cout << "\n";
    
}
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr), cin.exceptions(ios_base::failbit);
    int t;
	cin >> t;
	while(t--){
		solve();
	}
 	return 0;
 }
