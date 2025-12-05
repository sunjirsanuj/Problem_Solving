#include <bits/stdc++.h>
using namespace std;
 
#define Bismillah ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define vci vector<int>
#define vcll vector<long long>
#define vcs vector<string>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl '\n'
 
int main()
{
    Bismillah
    int n,ans=90;
    cin>>n;
    vci ara(n);
    for(int &x:ara)  cin>>x;
    if(ara[0]>15){
        cout<<15<<endl;
        return 0;
    }
    if(n==1){
        cout<<ara[0]+15<<endl;
        return 0;
    }
    for(int i=0;i<n-1;i++){
        if(ara[i]+15<ara[i+1]){
            ans=ara[i];
            break;
        }
        else ans=ara[i+1];
    }
    cout<<min(90,ans+15)<<endl;
    return 0;
}
