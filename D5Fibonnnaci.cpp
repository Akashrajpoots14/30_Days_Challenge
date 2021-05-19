<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;


void fib(int n){
    int t1=0;
    int t2=1;

    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        int nextTerm= t1+t2;
        t1=t2;
        t2=nextTerm;
    }
}


int main(){

    int n;
    cin>>n;

    fib(n);
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;


void fib(int n){
    int t1=0;
    int t2=1;

    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        int nextTerm= t1+t2;
        t1=t2;
        t2=nextTerm;
    }
}


int main(){

    int n;
    cin>>n;

    fib(n);
    return 0;
>>>>>>> 4a366b601b76aa6035b2dbf9ee3b60b91b5d7b54
}