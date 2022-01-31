#include <bits/stdc++.h>
#define dbg(...) cerr<<#__VA_ARGS__<<":"<<__VA_ARGS__<<"\n";
using namespace std;
void setIO(string str){
	freopen((str+".in").c_str(),"r",stdin);
	freopen((str+".out").c_str(),"w",stdout);
}
struct Rect{
	int x1,x2,y1,y2;
	int area(){
		return abs(x2-x1)*abs(y2-y1);
	}
};
Rect a,b;
int intersect(Rect p, Rect q) {
	int xOverlap = max(min(p.x2, q.x2) - max(p.x1, q.x1), 0);
	int yOverlap = max(min(p.y2, q.y2) - max(p.y1, q.y1), 0);
	return xOverlap * yOverlap;
}
void solve(){
	if (a.x1 >= b.x1 && a.x2 <= b.x2 && ((a.y2 >= b.y1 && a.y2 <= b.y2) || (a.y1 >= b.y1 && a.y1 <= b.y2))) {
		cout << a.area() - intersect(a, b) << '\n';
	} else if (a.y1 >= b.y1 && a.y2 <= b.y2 && ((a.x2 >= b.x1 && a.x2 <= b.x2) || (a.x1 >= b.x1 && a.x1 <= b.x2))) {
		cout << a.area() - intersect(a, b) << '\n';
	} else {
		cout << a.area() << '\n';
	}
}
int main(){
    setIO("billboard");
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	solve();
    return 0;
}