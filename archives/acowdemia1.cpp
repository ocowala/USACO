#include <bits/stdc++.h>
using namespace std; 
int n,l;
int hindex(vector<int> c){
    int ans=c.size();
    while(ans>0&&c[ans-1]<ans){
        --ans;
    }
    return ans;
}
int main(){
    cin>>n>>l;
    vector<int> c(n);
    for(int i=0;i<n;++i){
        cin>>c[i];
    }
    sort(c.rbegin(),c.rend());
    int h=hindex(c);
    if(h!=n){
        for(int i=h;i>=0&&i>h-l;--i){
            ++c[i];
        }
    }
    sort(c.rbegin(),c.rend());
    cout<<hindex(c)<<"\n";
    return 0;
}