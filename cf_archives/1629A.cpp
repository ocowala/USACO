
#include <bits/stdc++.h>
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n";
using namespace std;
bool cmp(pair<string, int>& a,pair<string, int>& b){
    return a.first < b.first;
}
void solve(){
	int n,k;
    cin>>n>>k;
    pair<int,int>arr[n];
    for(int i=0;i<n;i++)cin>>arr[i].first;
    for(int i=0;i<n;i++)cin>>arr[i].second;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i].first>k)break;
        k+=arr[i].second;
    }
    cout<<k<<endl;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);	
	int t; cin>>t;
	while(t--) solve();
	return 0;
}
