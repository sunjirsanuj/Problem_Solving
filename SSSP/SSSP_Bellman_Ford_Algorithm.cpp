#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> dis;
int n,e;

int main(){
    cout<<"Enter total node number: ";
    cin>>n;
    g.resize(n+1, vector<int>(n+1, INT_MAX));
    dis.resize(n+1);
    dis.assign(n+1, INT_MAX);
    cout<<"Enter total edge number: ";
    cin>>e;
    cout<<endl;

    for(int i=1; i<=e; i++){
        int u, v, w;
        cout<<"Enter connected nodes: ";
        cin>>u>>v;
        cout<<"Enter the weight: ";
        cin>>w;
        g[u][v]=w;
    }

    dis[1]=0;
    for(int i=0; i<n-1; i++){
        for(int u=1; u<=n; u++){
            for(int v=1; v<=n; v++){
                int w=g[u][v];
                if(w!=INT_MAX and dis[v]>dis[u]+w) dis[v]=dis[u]+w;
            }
        }
    }
    cout<<endl<<"SSSP for all nodes: "<<endl;
    for(int i=1; i<=n; i++)  cout<<i<<" -> "<<dis[i]<<endl;
    cout<<endl;
    return 0;
}