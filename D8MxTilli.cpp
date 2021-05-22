#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

//MAXX TILL I
    int maxT = INT_MIN;
    for(int i=0;i<=n;i++){
        maxT = max(maxT,arr[i]);
        cout<<maxT<<" ";
    }

    return 0;
}