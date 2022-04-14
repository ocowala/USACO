#include <bits/stdc++.h>
using namespace std;
void setIO(string str){
	if((int) str.size() > 0) freopen((str+".in").c_str(),"r",stdin),freopen((str+".out").c_str(),"w",stdout);
	cin.tie(nullptr);ios_base::sync_with_stdio(false);cin.exceptions(ios_base::failbit);
}
int N;
string s;
int consec_gs(){
    int cnt = 0;
    for(int i = 0; i < N-1; i++){
        if(s[i]=='G' && s[i+1]=='G'){
            ++cnt;
            ++i;
        }
    }
    return cnt;
}
int out_of_place(int j, int n){
    int cnt = 0;
    for(int i = j; i < n; i++)
        if(s[i]=='G'&&s[i]%2==1) ++cnt;
    return cnt;
}
int sz_take(){
    if((N/2)%2==1){
        int s = out_of_place(0,N/2 - 1), l = out_of_place(N/2 + 1,N);
        if(l > s) return N/2 + 1;
        else return N/2 - 1;
    }
    else{
        int s = out_of_place(0,N/2), l = out_of_place(N/2,N);
        if(l > s) return N/2 + 1;
        else return N/2 - 1;
    }
}
int main(){
	setIO("");
    cin >> N >> s;
    int ans = 0;
    int cur_g = 0, cur_even_g = 0;
    for(int i = 0; i < N; i++){
        if(s[i]=='G') ++cur_g;
        if(s[i]=='G'&&(i+1)%2==0) ++cur_even_g;
    }
    int sz = sz_take();
    string temp=s.substr(0,sz); reverse(temp.begin(),temp.end());
    cout << temp << "\n";
    cout << ans << "\n";
	return 0;
}
