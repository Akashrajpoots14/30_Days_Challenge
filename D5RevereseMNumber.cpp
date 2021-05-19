<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int reverse=0;
    
    while (n>0)
    {
        int lastDigit = n%10;
        reverse= (reverse*10)+lastDigit;
        n=n/10;    
    }

    cout<<reverse;

    return 0;
}

=======
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int reverse=0;
    
    while (n>0)
    {
        int lastDigit = n%10;
        reverse= (reverse*10)+lastDigit;
        n=n/10;    
    }

    cout<<reverse;

    return 0;
}

>>>>>>> 4a366b601b76aa6035b2dbf9ee3b60b91b5d7b54
