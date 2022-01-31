#include <bits/stdc++.h>
using namespace std; 
int main(){
    cin.tie(0)->sync_with_stdio(0);
    //freopen("teleport.in", "r", stdin);
    //freopen("teleport.out", "w", stdout);
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;++i){
        int a,b,c;
        cin>>a>>b>>c;
        ans+=(a+b+c>=2);
    }   
    cout<<ans<<"\n";
    return 0;
}