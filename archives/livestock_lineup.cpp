#include <bits/stdc++.h>
using namespace std;
#define io(...) freopen((string(__VA_ARGS__)+".in").c_str(),"r",stdin);freopen(((string(__VA_ARGS__)+".out")).c_str(),"w",stdout);
vector<string> cows,beside_a,beside_b;
int N;
int where(string c){
	for(int i=0;i<8;i++){
		if(cows[i]==c) return i;
	}
	return -1;
}
bool satisfies(){
	for(int i=0;i<N;i++){
		if(abs(where(beside_a[i])-where(beside_b[i]))!=1) return false;
	}
	return true;
}
int main(){
	//io("lineup");
	cin.tie(0)->sync_with_stdio(0),cin.exceptions(ios_base::failbit);
	cin >> N;
	cows.push_back("Beatrice");
	cows.push_back("Belinda");
	cows.push_back("Bella");
	cows.push_back("Bessie");
	cows.push_back("Betsy");
	cows.push_back("Blue");
	cows.push_back("Buttercup");
	cows.push_back("Sue");
	for(int i=0;i<N;i++){
		string a,b,t;
		cin >> a >> t >> t >> t >> t >> b;
		beside_a.push_back(a),beside_b.push_back(b);
	}
	do{
		if(satisfies()){
			for(int i=0;i<8;i++) cout << cows[i] << "\n";
			break;
		}
	}
	while(next_permutation(cows.begin(),cows.end()));
	return 0;	
}