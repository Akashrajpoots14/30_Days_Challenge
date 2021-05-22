#include<bits/stdc++.h>
using namespace std;

int main(){

    int amount;
    float balance;
    float rem_balance;

    cin>>amount;
    cin>>balance;

    if(amount%5==0){
        if(amount<balance && (amount+0.50 <= balance))
        {
            rem_balance = balance-amount-0.5;
            cout<<rem_balance;
        }else{
            cout<<balance;
        }
    }else{
        cout<<balance;
    }
    return 0;
}