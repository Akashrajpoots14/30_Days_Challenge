<<<<<<< HEAD
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

=======
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

>>>>>>> 4a366b601b76aa6035b2dbf9ee3b60b91b5d7b54
}