#include <bits/stdc++.h>
using namespace std; 
int main(){
    //freopen("promote.in", "r", stdin);
    //freopen("promote.out", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a[7];
    for(int i=0;i<7;++i) cin>>a[i];
    sort(a,a+7);
    cout<<a[0]<<" "<<a[1]<<" "<<a[6]-a[1]-a[0]<<"\n";
    return 0;
}