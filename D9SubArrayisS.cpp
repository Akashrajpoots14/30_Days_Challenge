#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int s;
    cin>>s;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Algorithm starts here

    int i=0,j=0;
    int st = 0-1,end = -1;
    int sum =0;
  while (j <n && (sum+arr[j] <= s))
  {
      sum += arr[j];
      j++;
  }
  if(sum == s){
      st =1+i;
      end =1+j;

      cout<<i<<" "<< j;
      return 0;
  }

  while (j<n)
  {
      sum += arr[j];
      if(sum>s){
          sum -= arr[i];
          i++;
      }
      if(sum == s){
      st = 1+i;
      end = 1+j;
      break;
    }
    j++;
  }

  cout<<st<<" "<<end;
  
    return 0;
}