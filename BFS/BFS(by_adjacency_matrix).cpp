#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
int n, e;
void BFS(int s){
    queue<int> q;
    visited[s]=true;
    cout<<s<<" ";
    q.push(s);

    while(!q.empty()){
        int u=q.front();
        q.pop();

        for(int i=1; i<=n; i++){
            if(!visited[i] and adj[u][i]==1){
                visited[i]=true;
                cout<<i<<" ";
                q.push(i);
            }
        }
    }
}

int main(){
    cout<<"Enter total node number: ";
    cin>>n;
    adj.resize(n+1, vector<int>(n+1));
    visited.resize(n+1);
    visited.assign(n+1, false);
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
        if(!visited[i]) BFS(i);
    }
    cout<<endl;

    return 0;
}