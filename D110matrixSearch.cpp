#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int n,m,target;
    cin>>n>>m;
    cin>>target;

    int a[n][m];

    for(int i=0;i<n;i++){
        for(int  j=0;j<m;j++){
            cin>>a[n][m];
        }
    }
    
    // Alog starts here;
    int r,c;
    r=0,c=n-1;
    bool flag = 0;
    while(r<n && m >=0){
        if(a[r][c] == target ){
            flag=1;
        }else if(a[r][c] > target ){
            c--;
        }else{
            r++;
        }
    }
    
  if(flag== true){
      cout<<"found";
  }else{
      cout<<"Not found";
  }
    
    return 0;
}