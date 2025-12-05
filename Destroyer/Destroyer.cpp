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
 
void solve(){
    int n;
    cin>>n;
    map <int, int> a;
    for (int i=0; i<n; i++){
        int x;
        cin>>x;
        a[x]++;
    }
 
    auto it=a.begin();
    int k=it->first, v=it->second;
    bool f=true;
 
    if(k!=0) no;
    else {
        for (auto i=++a.begin(); i!=a.end(); i++){
            if(k+1==i->first and v>=i->second){
                k=i->first;
                v=i->second;
            }
            else {
                f=false;
            }
        }
 
        if(f) yes;
        else no;
    }
 
}
 
int main()
{
    Bismillah
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
