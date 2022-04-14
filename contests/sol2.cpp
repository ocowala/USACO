#include <bits/stdc++.h>
using namespace std;
void setIO(string str){
	if((int) str.size() > 0) freopen((str+".in").c_str(),"r",stdin),freopen((str+".out").c_str(),"w",stdout);
	cin.tie(nullptr);ios_base::sync_with_stdio(false);cin.exceptions(ios_base::failbit);
}
int N;
string s;
int consec_gs(string s){
    int cnt = 0;
    for(int i = 0; i < N-1; ++i){
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
int cnt_gs(string s){
    int g = 0;
    for(int i = 0; i < (int) s.size(); i++){
        if(s[i] == 'G') ++g;
    }
    return g;
}
int amt_even_gs(string s){
    int g = 0;
    for(int i = 0; i < (int) s.size(); i++){
        if(s[i] == 'G' && i%2==1) ++g;
    }
    return g;
}
int ans = 0;
string answer(string s){
    int sz = (int) s.size();
    int amt_gs = cnt_gs(s);
    int consec_g = consec_gs(s);
    int mx_possible_even_gs = amt_gs - consec_g;
    int num_gs_even = amt_even_gs(s);
    //cout << "amt_gs: " << amt_gs << " nums_gs_even: " << num_gs_even << "  mx_possible_even_gs: " << mx_possible_even_gs << "\n";
    if(num_gs_even == mx_possible_even_gs){
       // cout << s << "\n";
        return "DONE";
    }
    else{
        for(int i = sz-1; i >= 0; i--){
            if(s[i] == 'G' && i%2==0){
                string temp = s.substr(0,i+2);
            // cout << "before reverse: " << temp << "\n";
                reverse(temp.begin(),temp.end());
                ++ans;
                //answer(temp);
                return temp;
            }
        }   
        return "DONE";
    }
}
int main(){
	setIO("");
    cin >> N >> s;
    string a = answer(s);
    cout << a << "\n";
    while(a != "DONE"){
        a = answer(a);
    }
    cout << a << "\n";
    cout << ans << "\n";
	return 0;
}
