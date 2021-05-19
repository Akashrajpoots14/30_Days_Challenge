<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int factorail =1;
    for(int i=1;i<=n;i++){
        factorail*=i;
    }
    return factorail;
}


int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/((fact(j)*fact(i-j)))<<" ";
        }
        cout<<endl;
    }


    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int factorail =1;
    for(int i=1;i<=n;i++){
        factorail*=i;
    }
    return factorail;
}


int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/((fact(j)*fact(i-j)))<<" ";
        }
        cout<<endl;
    }


    return 0;
>>>>>>> 4a366b601b76aa6035b2dbf9ee3b60b91b5d7b54
}