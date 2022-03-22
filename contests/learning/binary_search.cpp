#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=7;
    int a[]={1,3,2,4,5,6,8,7};
    sort(a,a+n);
    int l=0,r=7,m=0;
    int x=4;
    while(l<=r){
        m=l+(r-l)/2;
        if(a[m]==x){
            break;
        }
        else if(a[m]>x){
            r=m+1;
        }
        else{
            l=m-1;
        }
    }
    cout << m << "\n";
    return 0;
}