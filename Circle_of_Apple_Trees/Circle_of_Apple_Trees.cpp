#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    while(testCases--)
    {
        int n;
        int Count = 1;
        cin >> n;
        vector<int>b(n);
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        for(int j=0; j<(n-1); j++)
        {
            if(b[j+1]>b[j])
            {
                Count++;
            }
            else
            {
                continue;
            }
        }
        cout << Count << endl;
    }
    return 0;
}
