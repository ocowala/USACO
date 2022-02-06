#include <bits/stdc++.h>
#define dbg(...) cerr << #__VA_ARGS__ << ":" << __VA_ARGS__ << "\n";
#define i64 int64_t
using namespace std;
const int MOD=1000000007;
const int MAX_N=105;
void setIO(string str){freopen((str+".in").c_str(),"r",stdin);freopen((str+".out").c_str(),"w",stdout);}
int N;
vector<int> v(1000);
int amt_of_overlap(int a, int b, int c, int d){
    int total=max(b,d)-min(a,c);
    int intersect=max(0,max(a,c)-min(b,d));
    return total-intersect;
    //return intersect;
}
int main(){
    //setIO("lifeguards");
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cin.exceptions(ios_base::failbit);
    vector<vector<int>> input;
    cin >> N; 
    int b,c;
    int ans=0;
    for(int i=0; i<N; ++i){
        vector<int> a;
        cin >> b >> c;
        a.push_back(b);
        a.push_back(c);
        input.push_back(a);
    }
    vector<int> new_ans_arr;
    for(int i=0; i<N-1; ++i){
        for(int j=i+1; j<N; ++j){
            int new_ans=amt_of_overlap(input[i][0],input[i][1],input[j][0],input[j][1]);
            dbg(new_ans);
            new_ans_arr.push_back(new_ans);
        }
    }
    min_element(new_ans_arr.begin(), new_ans_arr.end());
    cout << ans << "\n";
    return 0;  
}