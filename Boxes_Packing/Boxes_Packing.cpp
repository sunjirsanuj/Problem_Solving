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
    int n;
    cin>>n;
    unordered_map<int, int> a;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a[x]++;
    }
 
    int mx=INT_MIN;
    for (auto &x:a) mx=max(mx,x.second);
    cout<<mx<<endl;
        
 
    return 0;
}
