#include <bits/stdc++.h>
using namespace std;
const int N=5;
vector<vector<int>> adj(N);
bool visited[N];
void dfs(int s){
    if(visited[s]) return;
    visited[s]=true;
    for(auto u: adj[s])
        dfs(u);
}
void bfs(int s){
    list<int> queue;
    visited[s]=true;
    queue.push_back(s);
    while(!queue.empty()){
        s=queue.front();
        cout << s << " ";
        queue.pop_front();
        for(auto i=adj[s].begin(); i!=adj[s].end(); ++i){
            if(!visited[*i]){
                visited[*i]=true;
                queue.push_back(*i);
            }
        }
    }
}
int main(){
    adj[0].push_back(1);
    adj[0].push_back(3);
    adj[1].push_back(2);
    adj[1].push_back(4);
    adj[2].push_back(1);
    adj[2].push_back(4);
    adj[3].push_back(0);
    //dfs(0);
    bfs(0);
    for(int i=0;i<N; ++i){
        cout << visited[i] << " ";
    }
    return 0;
}
/* 



*/