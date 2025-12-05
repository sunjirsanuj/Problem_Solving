#include <bits/stdc++.h>
using namespace std;
 
#define Bismillah ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define vci vector<int>
#define vcb vector<bool>
#define vcll vector<long long>
#define vcs vector<string>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl '\n'
 
int main()
{
    Bismillah
    int n, m;
    cin>>n>>m;
    vcb f(m+1);
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        for (int j=0; j<x; j++){
            int y; cin>>y;
            f[y]=true;
        }
    }
    bool fl=true;
    for (int i=1; i<=m; i++){
        if(!f[i]){
            fl=false;
            break;
        }
    }
    if(fl) yes;
    else no;
    return 0;
}
