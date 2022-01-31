//greedy algorithm
#include <bits/stdc++.h>
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n";
using namespace std;
const int MN=1e5+10;
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
void solve(){
	 int N;
	 string A,B;
	 cin >> N >> A >> B;
	 int ans=0;
	 int min=0;
	 for(int i=0; i<N; ++i){
	 	if(A[i]!=B[i]){
	 		++min;
	 	}
	 	else if(A[i]==B[i]&&min>=1){
	 		++ans;
	 		min=0;
	 	}
	 }
	cout << ans+min << "\n";		
}
int main(){
	//setIO("breedflip");
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int N;
	string A,B;
	cin >> N >> A >> B;
	int ans=0;
	for(int i=1; i<N+1; ++i){
		if(A[i]==B[i]&&A[i-1]!=B[i-1]){
			++ans;
		}
	}
	cout << ans << "\n";
    return 0;
}
