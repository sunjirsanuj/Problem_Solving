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
    int n, m;
    cin>>n>>m;
    vci a(n);
    for (int &x:a) cin>>x;
    sort(a.begin(), a.end());
    int c=0, f=0;
    for (int i=n-1; i>=0; i--){
        if(c<m){
            c+=a[i];
            f++;
        }
        else break;
    }
    cout<<f<<endl;
    return 0;
}
