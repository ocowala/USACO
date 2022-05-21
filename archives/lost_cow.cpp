#include <bits/stdc++.h>
using namespace std;
int x,y;
int main(){
    freopen("lostcow.in","r",stdin);
    freopen("lostcow.out","w",stdout);
    cin.tie(0)->sync_with_stdio(0);
    cin>>x>>y;
    int dist=0,i=0,pos=x;
    if(x<y){
        while(pos<y&&x<y){
            if(i%2==0){
                dist+=abs(pos-(x+pow(2,i)));
                pos=x+pow(2,i);
            }
            else{
                dist+=abs(pos-(x-pow(2,i)));
                pos=x-pow(2,i);
            }
            i++;
        }
        dist-=abs(pos-y);
    }
    else{
        while(pos>y&&x>y){
            if(i%2==0){
                dist+=abs(pos-(x+pow(2,i)));
                pos=x+pow(2,i);
            }
            else{
                dist+=abs(pos-(x-pow(2,i)));
                pos=x-pow(2,i);
            }
            i++;
        }
        dist-=abs(pos-y);
    }
    //cout<<pos<<"\n";
    cout<<dist<<"\n";
    return 0;
}