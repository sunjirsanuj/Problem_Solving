#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> dis;
int n,e;

int main(){
    cout<<"Enter total node number: ";
    cin>>n;
    g.resize(n+1, vector<int>(n+1));
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

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> p_q;
    dis[1]=0;
    p_q.push({0, 1});

    while(!p_q.empty()){
        int u=p_q.top().second;
        p_q.pop();

        for(int i=1; i<=n; i++){
            int w=g[u][i];
            if(w>0 and dis[i]>dis[u]+w){
                dis[i]=dis[u]+w;
                p_q.push({dis[i], i});
            }
        }
    }
    cout<<endl<<"SSSP for all nodes: "<<endl;
    for(int i=1; i<=n; i++)  cout<<i<<" -> "<<dis[i]<<endl;
    cout<<endl;
    return 0;
}