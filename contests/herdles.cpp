#include <bits/stdc++.h>
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n";
using namespace std;
const int MOD=1000000007;
const int MX=1e5+10;
void setIO(string str){
	freopen((str+".in").c_str(),"r",stdin);
	freopen((str+".out").c_str(),"w",stdout);
}
string correct[3],guess[3];
void remove_correct(){

}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
	//setIO("");
	
	for(int i=0;i<3; ++i){
		cin >> correct[i];
	}
	for(int i=0;i<3; ++i){
		cin >> guess[i];
	}

	int green=0,yellow=0;
	for(int ic=0; ic<3; ++ic){
		for(int jc=0; jc<3; ++jc){
			bool is_exist=false;
			for(int ig=0; ig<3; ++ig){
				for(int jg=0; jg<3; ++jg){
					if(correct[ic][jc]==guess[ig][jg]&&ic==ig&&jc==jg){
						++green;
						// cout << correct[ic][jc] << " ic: " << ic << " jc: " << jc << "\n";
						correct[ic][jc]='0';
						guess[ig][jg]='1';
						is_exist=true;
					}
					else if(correct[ic][jc]==guess[ig][jg]){
						//&&(ic!=ig||jc!=jg)
						is_exist=true;
					}
				}
			}
			if(!is_exist){
				
			}
		}
	}
	for(int ic=0; ic<3; ++ic){
		for(int jc=0; jc<3; ++jc){
			bool is_exist=false;
			for(int ig=0; ig<3; ++ig){
				for(int jg=0; jg<3; ++jg){
					if(correct[ic][jc]!='0'&&correct[ic][jc]==guess[ig][jg]){
						is_exist=true;
					}
				}
			}
			if(is_exist){
				++yellow;
			}
		}
	}
	// for(int ic=0; ic<3; ++ic){
	// 	for(int jc=0; jc<3; ++jc){
	// 		if(correct[ic][jc]!='0'){
	// 			++yellow;
	// 		}
	// 	}
	// }
	// cout << "\n";
	// for(int i=0; i<3; ++i){
	// 	for(int j=0; j<3; ++j){
	// 		 cout << correct[i][j];
	// 	}
	// 	cout << "\n";
	// }
	// cout << "\n";
	// for(int i=0; i<3; ++i){
	// 	for(int j=0; j<3; ++j){
	// 		 cout << guess[i][j];
	// 	}
	// 	cout << "\n";
	// }
	cout << green << "\n" << yellow;
    return 0;
}