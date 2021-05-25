#include<bits/stdc++.h>
using namespace std;


   bool pair(int arr[],int n,int k){
         int i=0;
         int j=n-1;

         while (i<j)
         {
             if(arr[i]+arr[j] == k){
                 cout<<i<<" "<<j;
                 return true;
             }
             else if(arr[i]+arr[j] > k){
                 j--;
             }else{
                 i++;
             }

         }
         
     }

int main(){

    int n,k;
    cin>>n>>k;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pair(arr,n,k);
    
    return 0;
}