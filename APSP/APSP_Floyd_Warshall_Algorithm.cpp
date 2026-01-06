#include<bits/stdc++.h>
using namespace std;

vector<vector<long long>> g;
int n,e;

int main(){
    cout<<"Enter total node number: ";
    cin>>n;
    g.resize(n+1, vector<long long>(n+1, INT_MAX));
    cout<<"Enter total edge number: ";
    cin>>e;
    cout<<endl;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j) g[i][j]=0;
        }
    }
    for(int i=1; i<=e; i++){
        int u, v, w;
        cout<<"Enter connected nodes: ";
        cin>>u>>v;
        cout<<"Enter the weight: ";
        cin>>w;
        g[u][v]=w;
    }

    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++) g[i][j]=min(g[i][j], g[i][k]+g[k][j]);
        }
    }
    cout<<endl<<"Final Matrix: "<<endl;
    for (int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) cout<<g[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}