#include <bits/stdc++.h>
using namespace std; 
void solve(){
    long long x1,x2,p1,p2;
    cin>>x1>>p1>>x2>>p2;
    int mn=min(p1,p2);
    p1-=mn;
    p2-=mn;
    if(p1>=7){
        cout<<">\n";
    }
    else if(p2>=7){
        cout<<"<\n";
    }
    else{
        for(int i=0;i<p1;++i){
            x1*=10;
        }
        for(int i=0;i<p2;++i){
            x2*=10;
        }
        if(x1<x2){
            cout<<"<\n";
        }
        else if(x1>x2){
            cout<<">\n";
        }
        else{
            cout<<"=\n";
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}