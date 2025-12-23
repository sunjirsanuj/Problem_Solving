#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;
    cout<<"Enter the first string: ";
    cin>>str1;
    cout<<"Enter the second string: ";
    cin>>str2;
    int m=str1.size(), n=str2.size();
    int LCS[m+1][n+1];

    for (int i=0; i<m+1; i++){
        for (int j=0; j<n+1; j++){
            if (i==0 or j==0) LCS[i][j]=0;
            else if (str1[i-1]==str2[j-1]) LCS[i][j]=1+LCS[i-1][j-1];
            else LCS[i][j]=max(LCS[i-1][j], LCS[i][j-1]);
        }
    }
    cout<<endl<<"LCS size: "<<LCS[m][n]<<endl;

    int i=m, j=n;
    string r="";
    while(i>0 or j>0){
        if(LCS[i][j]==LCS[i-1][j]){
            i--;
            continue;
        }
        else if(LCS[i][j]==LCS[i][j-1]){
            j--;
            continue;
        }
        r+=str2[j-1];
        i--;
        j--;
    }
    reverse(r.begin(), r.end());
    cout<<"The LCS string is: "<<r<<endl;

    return 0;
}
