#include<bits/stdc++.h>
using namespace std;

string str1, str2;
vector<vector<int>> memo_table;

int LCS(int i, int j){
    if(i==str1.size() or j==str2.size()) return memo_table[i][j]=0;
    else if(memo_table[i][j]!=-1) return memo_table[i][j];
    else if(str1[i]==str2[j]) return memo_table[i][j]=1+LCS(i+1, j+1);
    else return memo_table[i][j]=max(LCS(i+1, j), LCS(i, j+1));
}

int main(){
    cout<<"Enter the first string: ";
    cin>>str1;
    cout<<"Enter the second string: ";
    cin>>str2;
    int m=str1.size(), n=str2.size();
    memo_table.assign(m+1, vector<int>(n+1, -1));

    LCS(0, 0);
    cout<<endl<<"LCS size: "<<memo_table[0][0]<<endl;

    int i=0, j=0;
    string r="";
    while(i<m or j<n){
        if(memo_table[i][j]==memo_table[i+1][j]){
            i++;
            continue;
        }
        else if(memo_table[i][j]==memo_table[i][j+1]){
            j++;
            continue;
        }
        r+=str2[j];
        i++;
        j++;
    }
    cout<<"The LCS string is: "<<r<<endl;

    return 0;
}
