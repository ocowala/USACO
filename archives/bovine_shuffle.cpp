#include <bits/stdc++.h>
#define dbg(...) cerr << #__VA_ARGS__ << ":" << __VA_ARGS__ << "\n"
#define ll long long
using namespace std;
const int MOD=1000000007,MAX_N=2e5;
void setIO(string str){freopen((str+".in").c_str(),"r",stdin);freopen((str+".out").c_str(),"w",stdout);}
int n;
void reverse_shuffle(int* a,int* key){
	int tmp_a[n];
	for(int i=0;i<n;i++) tmp_a[i]=a[key[i]-1];
	for(int i=0;i<n;i++)a[i]= tmp_a[i];
	}
int main(){
    //setIO("shuffle");
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cin.exceptions(ios_base::failbit);
	cin>>n;
	int cows[n],key[n];
	for(int i=0;i<n;i++) cin>>key[i];
	for(int i=0;i<n;i++) cin>>cows[i];
	for(int i=0;i<3;i++) reverse_shuffle(cows,key);
	for(int i=0;i<n;i++) cout<<cows[i]<<"\n";
    return 0;  
}
