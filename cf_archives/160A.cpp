#include <bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
        sum+=a[i];
    }
    sum/=2;
    sort(a,a+n);
    int sum2=0,cnt=0;
    for(int i=n-1;i>=0;--i){
        sum2+=a[i];
        ++cnt;
        if(sum2>sum){
            break;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}