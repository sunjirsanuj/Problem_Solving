#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
int n, e;
void dfs(int s){
    visited[s]=true;
    cout<<s<<" ";
    for(int i=1; i<=n; i++){
        if(!visited[i] and adj[s][i]==1){
            dfs(i);
            visited[i]=true;
        }
    }
}

int main(){
    cout<<"Enter total node number: ";
    cin>>n;
    visited.resize(n+1);
    visited.assign(n+1, false);
    adj.resize(n+1, vector<int>(n+1));
    cout<<"Enter total edge number: ";
    cin>>e;

    int u, v;
    cout<<"Enter all connected nodes: ";
    for(int i=1; i<=e; i++){
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    
    cout<<endl<<"All nodes are: ";
    for(int i=1; i<=n; i++){
        if(!visited[i]) dfs(i);
    }
    cout<<endl;
    return 0;
}
