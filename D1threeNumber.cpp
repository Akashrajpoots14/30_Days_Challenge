#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<"A is greater amoung all";
        }else{
            cout<<"c is greater amoung all";
        }
    }else{
        if(b>c){
            cout<<"B is greater amoung all";
        }
        else{
            cout<<"C is greater amoung all";
        }
    }

    return 0;
}