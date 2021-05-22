#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //   method code starts here

    int countSum=0;
     for(int i=0;i<n;i++){
         for(int j=i;j<n;j++){
             countSum +=arr[j];
             cout<<countSum<<"  ";
         }
     }


       return 0;
}