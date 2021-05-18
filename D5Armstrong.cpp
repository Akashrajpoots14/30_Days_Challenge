#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
   int originalNo = n;
    float sum=0;

    while(n>0){
        int lastDigit = n%10;
        sum+=pow(lastDigit,3);
        n=n/10;
    }

        if(sum==originalNo){
                cout<<"Armstrong Number";
        }
    else{
            cout<<"NOT a ARmgstron";
    }
        
    return 0;

}