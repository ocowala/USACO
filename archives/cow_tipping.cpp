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
//row and col is the bottom right
int main(){
    //setIO("cowtip");
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int N;
	cin >> N;
	vector<vector<int>> grid(N);
	for(int i=0;i<N; ++i){
		string s;
		cin >> s;
		for(int j=0; j<(int)s.size(); ++j){
			grid[i].push_back(s[j]-48);
		}
	}
	int ans=0;
    for(int i=N-1; i>=0; --i){
        for(int j=N-1; j>=0; --j){
            if(grid[i][j]==1){
				//cout <<  " Flipped at : " << i << "," << j <<  " " << ans+1 << "\n";
				for(int k=0; k<=i; ++k){
					for(int l=0; l<=j; ++l){
						if(grid[k][l]==1){
							grid[k][l]=0;
						}
						else{
							grid[k][l]=1;
						}
					}
				}
				++ans;
			}
        }
    }
	// int row=3,col=3;
	
	// for(int i=0; i<N; ++i){
	// 	for(int j=0; j<N; ++j){
	// 		cout << grid[i][j] << " ";
	// 	}
	// 	cout << "\n";
	// }
	cout << ans << "\n";
    return 0;
}