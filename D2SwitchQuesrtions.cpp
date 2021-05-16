#include<bits/stdc++.h>
using namespace std;

int main(){

    int n1,n2;
    cout<<"Enter the numbers"<<endl;
    cin>>n1;
    cin>>n2;
    cout<<"Enter the Operator";
    char op;
    cin>>op;
    switch(op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;    
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;    
    default:
        cout<<"Enter a valid  operation";
        break;
    }   


    return 0;
}