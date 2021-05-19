<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}



int main(){

    int n;
    cin>>n;

   int ans= factorial(n);
    cout<<ans;
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}



int main(){

    int n;
    cin>>n;

   int ans= factorial(n);
    cout<<ans;
    return 0;
>>>>>>> 4a366b601b76aa6035b2dbf9ee3b60b91b5d7b54
}