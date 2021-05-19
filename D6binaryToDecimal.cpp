#include<bits/stdc++.h>
using namespace std;


int BinaryToDecimal(int n){
    int sum=0;
    int x=1;

    while(n>0){
        int y  = n%10;
        sum+=x*y;
        x*=2;
        n/=10;
    }
    return sum;
}

int32_t main(){
    
    int n;
    cin>>n;

    cout<<(BinaryToDecimal(n));
    
    return 0;
}