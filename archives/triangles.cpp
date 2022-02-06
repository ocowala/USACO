#include <bits/stdc++.h>
#define dbg(...) cerr << #__VA_ARGS__ << ":" << __VA_ARGS__ << "\n";
#define i64 int64_t
using namespace std;
const int MOD=1000000007;
const int MAX_N=105;
void setIO(string str){freopen((str+".in").c_str(),"r",stdin);freopen((str+".out").c_str(),"w",stdout);}
int N;
int x[MAX_N],y[MAX_N];
//stupid-solution is a method that solves the problem but it is the yandere dev way of seeing the problem
//MAKE BETTER OBESERVATIONS AND READ THE PROBLEM CAREFULLY AND FULLY UNDERSTAND WHAT IS ASKING FOR
void stupid_full_solution(){
    int max_area=0;
    for(int i=0; i<N-2; ++i){
        for(int j=i+1; j<N-1; ++j){
            for(int k=j+1; k<N; ++k){
                int area=0;
                // cout << "NEXT FOR LOOP\n";
                // cout << x[i] << " " << y[i] << "\n";
                // cout << x[j] << " " << y[j] << "\n";
                // cout << x[k] << " " << y[k] << "\n";
                //
                if(x[i]==x[j]){
                    if(y[i]==y[k]){
                        area=(abs(y[i]-y[j]))*(abs(x[i]-x[k]));
                       // cout << "if if area:" << area << "\n";
                    }
                    else if(y[j]==y[k]){
                        area=(abs(y[i]-y[j]))*(abs(x[j]-x[k]));
                       // cout << "if else if area:" << area << "\n";
                    }
                }
                else if(x[i]==x[k]){
                    if(y[i]==y[j]){
                        area=(abs(x[i]-x[j]))*(abs(y[i]-y[k]));
                       // cout << "else if 1 if area:" << area << "\n";
                    }
                    else if(y[k]==y[j]){
                        area=(abs(x[k]-x[j]))*(abs(y[i]-y[k]));
                       // cout << "else if 1 else if area:" << area << "\n";
                    }
                }
                else if(x[j]==x[k]){
                    if(y[j]==y[i]){
                        area=(abs(x[j]-x[i]))*(abs(y[j]-y[k]));
                        //cout << "else if 2 if area:" << area << "\n";
                    }
                    else if(y[k]==y[i]){
                        area=(abs(x[k]-x[i]))*(abs(y[j]-y[k]));
                        //cout << "else if 2 else if area:" << area << "\n";
                    }
                }
                max_area=max(max_area,area);
            }
        }
    }
    cout << max_area << "\n";
}
int main(){
    setIO("triangles");
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cin.exceptions(ios_base::failbit);
    cin >> N;
    for(int i=0; i<N; ++i) cin >> x[i] >> y[i];
    int max_area=0;
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            for(int k=0; k<N; ++k){
                int area=0;
                if(y[i]==y[j]&&x[i]==x[k]){
                    area=abs(x[i]-x[j])*abs(y[i]-y[k]);
                }
                max_area=max(max_area,area);
            }
        }
    }
    cout << max_area << "\n";
    return 0;  
}