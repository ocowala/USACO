#include <bits/stdc++.h>
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n";
using namespace std;
int main(){
    freopen("paint.in","r",stdin);
	freopen("paint.out","w",stdout);
	ios_base::sync_with_stdio(false);cin.tie(nullptr);	
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int total=max(b,d)-min(a,c);
    int intersect=max(0,max(a,c)-min(b,d));
    cout << total-intersect << "\n";
	return 0;
}
/* 

*/
