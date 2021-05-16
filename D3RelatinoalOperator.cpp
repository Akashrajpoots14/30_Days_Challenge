#include<bits/stdc++.h>
using namespace std;

int main(){

    int n1 =2;
    int n2 =3;

    int input;
    cin>>input;

    if(input%n1==0 && input%n2==0){
        cout<<"Number is Divisible by both "<<endl;
    }else if(input%n1==0 || input%n2==0){
        cout<<"Number is Divisible only one";
    }else{
        cout<<"Divisible by none of the numbers"<<endl;
    }

    return 0;
}