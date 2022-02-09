#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> points(n);
    int ans=0;
    for(int i=0;i<n;++i){
        cin>>points[i].first>>points[i].second;
        ans=max(ans,points[i].first+points[i].second);
    }
    cout<<ans<<"\n";
    return 0;
}