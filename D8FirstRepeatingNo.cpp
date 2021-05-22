#include<bits/stdc++.h>
using namespace  std;

int main(){

     int n;
     cin>>n;

     int arr[n];
    
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     //Alorithm starts  here

    const int N = 1e6+2;
    int idx[N];  

    for(int i=0;i<n;i++){
        idx[i] = -1;
    }

    //

    int maximin = INT_MAX;

    for( int i=0;i<n;i++){
        if(idx[arr[i]] != -1){
            maximin =  min(maximin,idx[arr[i]]);
        }else{
            idx[arr[i]]=i;
        }
    }

    if(maximin == INT_MAX){
        cout<<"-1";
    }else{
        cout<<maximin+1;
    }

    return 0;
}