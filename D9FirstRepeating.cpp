#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
     int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //
     int N;
     cin>>N;
    int idx[N];

    for(int i=0;i<N;i++){
        idx[i]= -1;
        cout<<"filling the elements";
    }

    int minIndex=INT_MAX;

     for(int i=0;i<n;i++){
         if(idx[arr[i]] != -1){
             minIndex = min(minIndex,idx[arr[i]]);
         }else{
             idx[arr[i]]=i;
         }
     }

     if(minIndex == INT_MAX){
         cout<<"-1";
     }else{
         cout<<minIndex+1;
     }

    return 0;
}