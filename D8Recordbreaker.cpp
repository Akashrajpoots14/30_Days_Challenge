# include<bits/stdc++.h>
 using namespace std;

  int main(){

    int n;
    cin>>n;

    int arr[n+1];
    arr[n]=-1;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Algorithm starts here
   
   if(n==1){
       cout<<1;
       return 0;
   }

    int mx = -1;
    int ans = 0;
    for(int i=0;i<=n;i++){
        if( arr[i]>mx &&arr[i]>arr[i+1]){
            ans++;
        }
        mx = max(mx,arr[i]);
    }

    cout<<ans;

      return 0;
  }