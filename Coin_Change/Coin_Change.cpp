#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, T;
    cout<<"Enter total number of coins: ";
    cin>>n;
    cout<<"Enter target value: ";
    cin>>T;

    int coin[n+1], coins[n+1][T+1];
    cout<<"Enter the coins: ";
    for(int i=1; i<=n; i++) cin>>coin[i];

    for(int i=0; i<n+1; i++){
        for(int j=0; j<T+1; j++){
            if((i==0 and j==0) or j==0) coins[i][j]=0;
            else if(i==0) coins[i][j]=INT_MAX;
            else if(j>=coin[i]) coins[i][j]=min(coins[i-1][j], 1+coins[i][j-coin[i]]);
            else coins[i][j]=coins[i-1][j];
        }
    }
    cout<<endl<<"Minimum number of coins: "<<coins[n][T]<<endl;;

    vector<int>x;
    int i=n, j=T, maxc=T;

    while(maxc>0){
        if(coins[i-1][j]==coins[i][j]){
            i--;
            continue;
        }
        x.push_back(coin[i]);
        maxc-=coin[i];
        j=maxc;
        i=n;
    }

    cout<<"The coins are: ";
    for(int i=0; i<x.size(); i++) cout<<x[i]<<" ";
    cout<<endl;

    return 0;
}