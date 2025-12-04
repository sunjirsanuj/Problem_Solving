#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, W;

    cout<<"Enter total number of items: ";
    cin>>n;
    cout<<"Enter Knapsack Weight: ";
    cin>>W;

    int p[n+1], w[n+1];
    int K[n+1][W+1];
    memset(K, 0, sizeof(K));

    cout<<"Enter all item's profit: ";
    for (int i=1; i<=n; i++) cin>>p[i];
    cout<<"Enter all item's weight: ";
    for (int i=1; i<=n; i++) cin>>w[i];

    for (int i=1; i<=n; i++){
        for (int j=1; j<=W; j++){
            if(w[i]<=j) K[i][j] = max(K[i-1][j], K[i-1][j-w[i]]+p[i]);
            else K[i][j]= K[i-1][j];
        }
    }
    cout<<endl<<"Maximum profit: "<<K[n][W]<<endl;

    int maxp = K[n][W];
    int j=W, i=n;
    int x[n+1];
    memset(x, 0, sizeof(x));

    while(i>0 and maxp>0){
        if(maxp==K[i-1][j]){
            i--;
            continue;
        }

        x[i]=1;
        maxp-=p[i];
        j-=w[i];
        i--;
    }

    cout<<endl<<"The items are: ";
    for (int i=1; i<=n; i++){
        if(x[i]) cout<<i<<" no. item, profit: "<<p[i];
            cout<<endl;
    }

    return 0;
}
