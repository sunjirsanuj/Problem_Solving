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
    int x1, x2, y1, y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<max(abs(x1-x2), abs(y1-y2));

    return 0;
}
