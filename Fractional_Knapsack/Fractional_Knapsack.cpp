#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter total element number: ";
    cin>>n;
    cout<<endl;

    int p[n], w[n], W;
    float r[n];
    cout<<"Enter all elements profit: ";
    for (int i=0; i<n; i++) cin>>p[i];
    cout<<"Enter all elements weight: ";
    for(int i=0; i<n; i++) cin>>w[i];
    for (int i=0; i<n; i++) r[i]=(float)p[i]/(float)w[i];

    cout<<endl<<"Enter the Knapsack weight: ";
    cin>>W;

    // sorting the ration array using selection sorting algorithm
    for(int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if(r[j]>r[i]){
                swap(r[j], r[i]);
                swap(p[j], p[i]);
                swap(w[j], w[i]);
            }
        }
    }
    float x[n];
    memset(x, 0, sizeof(x));
    for (int i=0; i<n; i++){
        if(W>=w[i]){
            x[i]=1;
            W-=w[i];
        }
        else if(W<w[i] and W!=0){
            x[i]=(float)W/(float)w[i];
            W=0;
        }
        else break;
    }

    float maxP=0;
    for(int i=0; i<n; i++) maxP+=x[i]*(float)p[i];
    cout<<"Maximum profit: "<<maxP<<endl;

    return 0;
}
