#include <bits/stdc++.h>
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n";
using namespace std;
void setIO(string str){
	freopen((str+".in").c_str(),"r",stdin);
	freopen((str+".out").c_str(),"w",stdout);
}
int main(){
	//setIO("word");
	ios_base::sync_with_stdio(false);cin.tie(nullptr);	
	int N,K;
	cin>>N>>K;
	int amt=0;
	for(int i=0; i<N; ++i){
		string s;
		cin>>s;
		if(s.size()+amt<=K&&i==0){
			cout<<s;
			amt+=s.size();
			//cout<<amt;
		}
		else if(s.size()+amt<=K&&i>0){
			cout<<" "<<s;
			amt+=s.size();
		}
		else{
			cout<<"\n"<<s;
			amt=s.size();
			//cout<<amt;
		}
	}
	return 0;
}
