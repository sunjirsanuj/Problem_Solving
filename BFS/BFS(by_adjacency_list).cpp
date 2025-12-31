#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<bool> visited;
int n, e;
void bfs(int s){
    queue<int> q;
    visited[s]=true;
    cout<<s<<" ";
    q.push(s);

    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0; i<g[u].size(); i++){
            int v=g[u][i];
            if(!visited[v]){
                visited[v]=true;
                cout<<v<<" ";
                q.push(v);
            }
        }
    }
}

int main(){
    cout<<"Enter total node number: ";
    cin>>n;
    visited.resize(n+1);
    visited.assign(n+1, false);
    g.resize(n+1);
    cout<<"Enter total edge number: ";
    cin>>e;

    int u, v;
    cout<<"Enter all connected nodes: ";
    for(int i=1; i<=e; i++){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cout<<endl<<"All nodes are: ";
    for(int i=1; i<=n; i++){
        if(!visited[i]) bfs(i);
    }
    cout<<endl;

}